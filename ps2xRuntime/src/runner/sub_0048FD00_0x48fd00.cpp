#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048FD00
// Address: 0x48fd00 - 0x490190
void sub_0048FD00_0x48fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FD00_0x48fd00");
#endif

    switch (ctx->pc) {
        case 0x48fd28u: goto label_48fd28;
        case 0x48fdf8u: goto label_48fdf8;
        case 0x48ffa0u: goto label_48ffa0;
        case 0x490100u: goto label_490100;
        default: break;
    }

    ctx->pc = 0x48fd00u;

    // 0x48fd00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48fd04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x48fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x48fd08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48fd0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48fd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fd10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x48fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x48fd14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48fd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fd18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x48fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x48fd1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fd20: 0xc123812  jal         func_48E048
    ctx->pc = 0x48FD20u;
    SET_GPR_U32(ctx, 31, 0x48FD28u);
    ctx->pc = 0x48FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FD20u;
    // 0x48fd24: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E048u, 0x48FD20u, 0x48FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FD28u;
label_48fd28:
    // 0x48fd28: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x48fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48fd2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x48fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48fd30: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x48fd30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48fd34: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x48fd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x48fd38: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x48FD38u;
    {
        const bool branch_taken_0x48fd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD38u;
        // 0x48fd3c: 0x8f828744  lw          $v0, -0x78BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd38) {
            ctx->pc = 0x48FD90u;
            goto label_48fd90;
        }
    }
    ctx->pc = 0x48FD40u;
    // 0x48fd40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48fd44: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x48fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x48fd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48fd4c: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x48fd4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x48fd50: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x48FD50u;
    {
        const bool branch_taken_0x48fd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x48fd50) {
            ctx->pc = 0x48FD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48FD50u;
            // 0x48fd54: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48FD60u;
            goto label_48fd60;
        }
    }
    ctx->pc = 0x48FD58u;
    // 0x48fd58: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x48FD58u;
    {
        const bool branch_taken_0x48fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD58u;
        // 0x48fd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd58) {
            ctx->pc = 0x490170u;
            goto label_490170;
        }
    }
    ctx->pc = 0x48FD60u;
label_48fd60:
    // 0x48fd60: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x48fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x48fd64: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x48fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x48fd68: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x48fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x48fd6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x48fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48fd70: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x48fd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x48fd74: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x48fd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x48fd78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x48fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x48fd7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48fd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48fd80: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x48fd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x48fd84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48fd88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48FD88u;
    {
        const bool branch_taken_0x48fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD88u;
        // 0x48fd8c: 0xff8286f0  sd          $v0, -0x7910($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd88) {
            ctx->pc = 0x48FDB0u;
            goto label_48fdb0;
        }
    }
    ctx->pc = 0x48FD90u;
label_48fd90:
    // 0x48fd90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48fd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48fd94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48FD94u;
    {
        const bool branch_taken_0x48fd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD94u;
        // 0x48fd98: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd94) {
            ctx->pc = 0x48FDA4u;
            goto label_48fda4;
        }
    }
    ctx->pc = 0x48FD9Cu;
    // 0x48fd9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48FD9Cu;
    {
        const bool branch_taken_0x48fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FD9Cu;
        // 0x48fda0: 0xdc43f670  ld          $v1, -0x990($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294964848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd9c) {
            ctx->pc = 0x48FDACu;
            goto label_48fdac;
        }
    }
    ctx->pc = 0x48FDA4u;
label_48fda4:
    // 0x48fda4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48fda8: 0xdc43f7e0  ld          $v1, -0x820($v0)
    ctx->pc = 0x48fda8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x70F7E0u));
label_48fdac:
    // 0x48fdac: 0xff8386f0  sd          $v1, -0x7910($gp)
    ctx->pc = 0x48fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U64(ctx, 3));
label_48fdb0:
    // 0x48fdb0: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x48fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48fdb4: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x48fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x48fdb8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x48fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48fdbc: 0x8465001c  lh          $a1, 0x1C($v1)
    ctx->pc = 0x48fdbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x48fdc0: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x48fdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x48fdc4: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x48fdc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x48fdc8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x48fdc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x48fdcc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x48fdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x48fdd0: 0x2610001f  addiu       $s0, $s0, 0x1F
    ctx->pc = 0x48fdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x48fdd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48fdd8: 0x2068024  and         $s0, $s0, $a2
    ctx->pc = 0x48fdd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x48fddc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48fddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48fde0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x48fde0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48fde4: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x48fde4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
    // 0x48fde8: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x48fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x48fdec: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x48fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x48fdf0: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48FDF0u;
    SET_GPR_U32(ctx, 31, 0x48FDF8u);
    ctx->pc = 0x48FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FDF0u;
    // 0x48fdf4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48FDF0u, 0x48FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FDF8u;
label_48fdf8:
    // 0x48fdf8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48fdfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x48fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48fe00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x48fe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x48fe04: 0x6602000b  daddiu      $v0, $s0, 0xB
    ctx->pc = 0x48fe04u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)11);
    // 0x48fe08: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x48fe08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48fe0c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x48fe0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x48fe10: 0x50102d  daddu       $v0, $v0, $s0
    ctx->pc = 0x48fe10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x48fe14: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x48fe14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48fe18: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48fe18u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48fe1c: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48fe20: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48fe24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x48fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48fe28: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x48fe28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48fe2c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x48FE2Cu;
    {
        const bool branch_taken_0x48fe2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FE2Cu;
        // 0x48fe30: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fe2c) {
            ctx->pc = 0x48FE48u;
            goto label_48fe48;
        }
    }
    ctx->pc = 0x48FE34u;
    // 0x48fe34: 0x9f8586f0  lwu         $a1, -0x7910($gp)
    ctx->pc = 0x48fe34u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x48fe38: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x48fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x48fe3c: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48fe3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48fe40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48FE40u;
    {
        const bool branch_taken_0x48fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FE40u;
        // 0x48fe44: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fe40) {
            ctx->pc = 0x48FE68u;
            goto label_48fe68;
        }
    }
    ctx->pc = 0x48FE48u;
label_48fe48:
    // 0x48fe48: 0xdf8586f0  ld          $a1, -0x7910($gp)
    ctx->pc = 0x48fe48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x48fe4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fe50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48fe54: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x48fe54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x48fe58: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x48fe58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x48fe5c: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48fe5cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48fe60: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48fe64: 0x0  nop
    ctx->pc = 0x48fe64u;
    // NOP
label_48fe68:
    // 0x48fe68: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x48fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48fe6c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48fe70: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x48fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x48fe74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48FE74u;
    {
        const bool branch_taken_0x48fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FE74u;
        // 0x48fe78: 0xdf8586e8  ld          $a1, -0x7918($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fe74) {
            ctx->pc = 0x48FEA8u;
            goto label_48fea8;
        }
    }
    ctx->pc = 0x48FE7Cu;
    // 0x48fe7c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x48fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x48fe80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x48fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x48fe84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48fe88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x48fe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x48fe8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48fe90: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x48fe90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x48fe94: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48fe94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48fe98: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48fe98u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48fe9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48FE9Cu;
    {
        const bool branch_taken_0x48fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FE9Cu;
        // 0x48fea0: 0x8f82898c  lw          $v0, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fe9c) {
            ctx->pc = 0x48FEC0u;
            goto label_48fec0;
        }
    }
    ctx->pc = 0x48FEA4u;
    // 0x48fea4: 0x0  nop
    ctx->pc = 0x48fea4u;
    // NOP
label_48fea8:
    // 0x48fea8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x48fea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x48feac: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x48feacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x48feb0: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x48feb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x48feb4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x48feb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x48feb8: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48feb8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48febc: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_48fec0:
    // 0x48fec0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48fec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48fec4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48fec8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48fecc: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x48feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48fed0: 0x24090045  addiu       $t1, $zero, 0x45
    ctx->pc = 0x48fed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x48fed4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x48fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x48fed8: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x48fed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x48fedc: 0x71222389  pcpyld      $a0, $t1, $v0
    ctx->pc = 0x48fedcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x48fee0: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48fee4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48fee8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x48fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48feec: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48feecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48fef0: 0xdf8586f8  ld          $a1, -0x7908($gp)
    ctx->pc = 0x48fef0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x48fef4: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x48fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
    // 0x48fef8: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x48fef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x48fefc: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x48fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x48ff00: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48ff00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48ff04: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x48ff04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x48ff08: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x48ff08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x48ff0c: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48ff0cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48ff10: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x48ff10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x48ff14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x48ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48ff18: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48ff1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48ff1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ff20: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x48ff20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x48ff24: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48ff24u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48ff28: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x48ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x48ff2c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x48ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x48ff30: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48ff34: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x48ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x48ff38: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x48ff38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x48ff3c: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x48ff3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x48ff40: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x48ff40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x48ff44: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x48ff44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48ff48: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48ff48u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48ff4c: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x48ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x48ff50: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x48ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x48ff54: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48ff58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48ff5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48ff5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ff60: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48ff60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48ff64: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x48ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x48ff68: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x48ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x48ff6c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48ff70: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x48ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x48ff74: 0x848a001c  lh          $t2, 0x1C($a0)
    ctx->pc = 0x48ff74u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x48ff78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x48ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x48ff7c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x48ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x48ff80: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x48ff80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x48ff84: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x48FF84u;
    {
        const bool branch_taken_0x48ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FF84u;
        // 0x48ff88: 0xdf8586f0  ld          $a1, -0x7910($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ff84) {
            ctx->pc = 0x4900A8u;
            goto label_4900a8;
        }
    }
    ctx->pc = 0x48FF8Cu;
    // 0x48ff8c: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x48ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48ff90: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x48ff90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ff94: 0x240cffe0  addiu       $t4, $zero, -0x20
    ctx->pc = 0x48ff94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x48ff98: 0x8482001e  lh          $v0, 0x1E($a0)
    ctx->pc = 0x48ff98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x48ff9c: 0x0  nop
    ctx->pc = 0x48ff9cu;
    // NOP
label_48ffa0:
    // 0x48ffa0: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x48ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x48ffa4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x48ffa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48ffa8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x48ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x48ffac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48ffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48ffb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48ffb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ffb4: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x48ffb4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x48ffb8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48ffbc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x48ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x48ffc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48ffc4: 0x11600014  beqz        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x48FFC4u;
    {
        const bool branch_taken_0x48ffc4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FFC4u;
        // 0x48ffc8: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ffc4) {
            ctx->pc = 0x490018u;
            goto label_490018;
        }
    }
    ctx->pc = 0x48FFCCu;
    // 0x48ffcc: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x48ffccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x48ffd0: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x48ffd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x48ffd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48ffd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48ffd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48ffd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x48ffdc: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x48ffdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x48ffe0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48ffe4: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x48ffe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48ffe8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x48ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x48ffec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48ffecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x48fff0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48fff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x48fff4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x48fff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x48fff8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x48fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x48fffc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48fffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x490000: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x490000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x490004: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x490004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x490008: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x490008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x49000c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49000Cu;
    {
        const bool branch_taken_0x49000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49000Cu;
        // 0x490010: 0x2283e  dsrl32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49000c) {
            ctx->pc = 0x49001Cu;
            goto label_49001c;
        }
    }
    ctx->pc = 0x490014u;
    // 0x490014: 0x0  nop
    ctx->pc = 0x490014u;
    // NOP
label_490018:
    // 0x490018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x490018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49001c:
    // 0x49001c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x49001cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x490020: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x490020u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x490024: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x490024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x490028: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x490028u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x49002c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x49002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x490030: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x490030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x490034: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x490034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x490038: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x490038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49003c: 0x8486001c  lh          $a2, 0x1C($a0)
    ctx->pc = 0x49003cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x490040: 0x25450020  addiu       $a1, $t2, 0x20
    ctx->pc = 0x490040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x490044: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x490044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x490048: 0x8488001e  lh          $t0, 0x1E($a0)
    ctx->pc = 0x490048u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x49004c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x49004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x490050: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x490050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x490054: 0xe5302a  slt         $a2, $a3, $a1
    ctx->pc = 0x490054u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x490058: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x490058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49005c: 0xe6280b  movn        $a1, $a3, $a2
    ctx->pc = 0x49005cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x490060: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x490060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x490064: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x490064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x490068: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x490068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49006c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490070: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x490070u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x490074: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x490074u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x490078: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x490078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49007c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49007cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x490080: 0x25420020  addiu       $v0, $t2, 0x20
    ctx->pc = 0x490080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x490084: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x490084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x490088: 0x4c5024  and         $t2, $v0, $t4
    ctx->pc = 0x490088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x49008c: 0x8483001c  lh          $v1, 0x1C($a0)
    ctx->pc = 0x49008cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x490090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x490090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x490094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x490094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x490098: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x490098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49009c: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x49009Cu;
    {
        const bool branch_taken_0x49009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49009c) {
            ctx->pc = 0x4900A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49009Cu;
            // 0x4900a0: 0x8482001e  lh          $v0, 0x1E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48FFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ffa0;
        }
    }
    ctx->pc = 0x4900A4u;
    // 0x4900a4: 0xdf8586f0  ld          $a1, -0x7910($gp)
    ctx->pc = 0x4900a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
label_4900a8:
    // 0x4900a8: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x4900a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4900ac: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x4900acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x4900b0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4900b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4900b4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x4900b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x4900b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4900bc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4900bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4900c0: 0xdf8586e8  ld          $a1, -0x7918($gp)
    ctx->pc = 0x4900c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x4900c4: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x4900c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x4900c8: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x4900c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x4900cc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x4900ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x4900d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4900d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4900d4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4900d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4900d8: 0xdf848700  ld          $a0, -0x7900($gp)
    ctx->pc = 0x4900d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x4900dc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x4900dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x4900e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4900e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4900e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4900e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4900e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4900e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4900ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4900ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4900f0: 0x93838998  lbu         $v1, -0x7668($gp)
    ctx->pc = 0x4900f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936984)));
    // 0x4900f4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4900F4u;
    {
        const bool branch_taken_0x4900f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4900F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4900F4u;
        // 0x4900f8: 0x822824  and         $a1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4900f4) {
            ctx->pc = 0x490140u;
            goto label_490140;
        }
    }
    ctx->pc = 0x4900FCu;
    // 0x4900fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4900fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_490100:
    // 0x490100: 0x42000039  di
    ctx->pc = 0x490100u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x490104: 0x40f  sync.p
    ctx->pc = 0x490104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x490108: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x490108u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x49010c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49010cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490110: 0x0  nop
    ctx->pc = 0x490110u;
    // NOP
    // 0x490114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x490114u;
    {
        const bool branch_taken_0x490114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x490114) {
            ctx->pc = 0x490100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490100;
        }
    }
    ctx->pc = 0x49011Cu;
    // 0x49011c: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x49011cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
    // 0x490120: 0x93828999  lbu         $v0, -0x7667($gp)
    ctx->pc = 0x490120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936985)));
    // 0x490124: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x490124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x490128: 0x9384899b  lbu         $a0, -0x7665($gp)
    ctx->pc = 0x490128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x49012c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x49012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x490130: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x490130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x490134: 0x42000038  ei
    ctx->pc = 0x490134u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x490138: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x490138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x49013c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49013cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_490140:
    // 0x490140: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x490140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x490144: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x490144u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x490148: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x490148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x49014c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x49014cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x490150: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x490150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x490154: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x490154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x490158: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x490158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x49015c: 0x71252389  pcpyld      $a0, $t1, $a1
    ctx->pc = 0x49015cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x490160: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x490160u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x490164: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x490164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x490168: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x490168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x49016c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490170:
    // 0x490170: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x490170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490174: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x490174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x490178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49017c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49017cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490184: 0x3e00008  jr          $ra
    ctx->pc = 0x490184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490184u;
        // 0x490188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49018Cu;
    // 0x49018c: 0x0  nop
    ctx->pc = 0x49018cu;
    // NOP
    ctx->pc = 0x490190u;
}
