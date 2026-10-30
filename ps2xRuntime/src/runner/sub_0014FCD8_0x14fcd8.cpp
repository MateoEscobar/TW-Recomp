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

// Function: sub_0014FCD8
// Address: 0x14fcd8 - 0x14feb0
void sub_0014FCD8_0x14fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FCD8_0x14fcd8");
#endif

    switch (ctx->pc) {
        case 0x14fd24u: goto label_14fd24;
        case 0x14fd48u: goto label_14fd48;
        case 0x14fd5cu: goto label_14fd5c;
        case 0x14fd6cu: goto label_14fd6c;
        case 0x14fe30u: goto label_14fe30;
        case 0x14fe3cu: goto label_14fe3c;
        case 0x14fe48u: goto label_14fe48;
        case 0x14fe54u: goto label_14fe54;
        case 0x14fe60u: goto label_14fe60;
        case 0x14fe6cu: goto label_14fe6c;
        case 0x14fe78u: goto label_14fe78;
        case 0x14fe80u: goto label_14fe80;
        case 0x14fe88u: goto label_14fe88;
        default: break;
    }

    ctx->pc = 0x14fcd8u;

    // 0x14fcd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14fcdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14fcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14fce0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14fce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14fcec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14fcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14fcf4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14fcf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcf8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14fcfc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14fcfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x14fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x14fd04: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x14fd04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fd0c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x14fd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14fd10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14FD10u;
    {
        const bool branch_taken_0x14fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD10u;
        // 0x14fd14: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd10) {
            ctx->pc = 0x14FD34u;
            goto label_14fd34;
        }
    }
    ctx->pc = 0x14FD18u;
    // 0x14fd18: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14fd1c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14FD1Cu;
    SET_GPR_U32(ctx, 31, 0x14FD24u);
    ctx->pc = 0x14FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD1Cu;
    // 0x14fd20: 0x2484bed0  addiu       $a0, $a0, -0x4130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14FD1Cu, 0x14FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD24u;
label_14fd24:
    // 0x14fd24: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14fd28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14fd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14FD2Cu;
    {
        const bool branch_taken_0x14fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD2Cu;
        // 0x14fd30: 0x2484bee8  addiu       $a0, $a0, -0x4118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd2c) {
            ctx->pc = 0x14FD54u;
            goto label_14fd54;
        }
    }
    ctx->pc = 0x14FD34u;
label_14fd34:
    // 0x14fd34: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x14fd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x14fd38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14FD38u;
    {
        const bool branch_taken_0x14fd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD38u;
        // 0x14fd3c: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd38) {
            ctx->pc = 0x14FD64u;
            goto label_14fd64;
        }
    }
    ctx->pc = 0x14FD40u;
    // 0x14fd40: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14FD40u;
    SET_GPR_U32(ctx, 31, 0x14FD48u);
    ctx->pc = 0x14FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD40u;
    // 0x14fd44: 0x2484bed0  addiu       $a0, $a0, -0x4130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14FD40u, 0x14FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD48u;
label_14fd48:
    // 0x14fd48: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14fd4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd50: 0x2484bf08  addiu       $a0, $a0, -0x40F8
    ctx->pc = 0x14fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950664));
label_14fd54:
    // 0x14fd54: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14FD54u;
    SET_GPR_U32(ctx, 31, 0x14FD5Cu);
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14FD54u, 0x14FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD5Cu;
label_14fd5c:
    // 0x14fd5c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x14FD5Cu;
    {
        const bool branch_taken_0x14fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD5Cu;
        // 0x14fd60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd5c) {
            ctx->pc = 0x14FE8Cu;
            goto label_14fe8c;
        }
    }
    ctx->pc = 0x14FD64u;
label_14fd64:
    // 0x14fd64: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14FD64u;
    SET_GPR_U32(ctx, 31, 0x14FD6Cu);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14FD64u, 0x14FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD6Cu;
label_14fd6c:
    // 0x14fd6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14fd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fd74: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14fd78: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x14fd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd7c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x14fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14fd80: 0x2463c1a8  addiu       $v1, $v1, -0x3E58
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951336));
    // 0x14fd84: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14fd88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fd8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FD8Cu;
    {
        const bool branch_taken_0x14fd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD8Cu;
        // 0x14fd90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd8c) {
            ctx->pc = 0x14FDB4u;
            goto label_14fdb4;
        }
    }
    ctx->pc = 0x14FD94u;
    // 0x14fd94: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14fd98: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14fd9c: 0x2442c1b0  addiu       $v0, $v0, -0x3E50
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951344));
    // 0x14fda0: 0x8c85c1a0  lw          $a1, -0x3E60($a0)
    ctx->pc = 0x14fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951328)));
    // 0x14fda4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fda8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14fda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14FDACu;
    {
        const bool branch_taken_0x14fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDACu;
        // 0x14fdb0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdac) {
            ctx->pc = 0x14FDF8u;
            goto label_14fdf8;
        }
    }
    ctx->pc = 0x14FDB4u;
label_14fdb4:
    // 0x14fdb4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14fdb8: 0x2445c1b0  addiu       $a1, $v0, -0x3E50
    ctx->pc = 0x14fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951344));
    // 0x14fdbc: 0x8c87c1a0  lw          $a3, -0x3E60($a0)
    ctx->pc = 0x14fdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50C1A0u));
    // 0x14fdc0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x14fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14fdc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fdc8: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FDC8u;
    {
        const bool branch_taken_0x14fdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x14FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDC8u;
        // 0x14fdcc: 0x2484c1a0  addiu       $a0, $a0, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdc8) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FDD0u;
    // 0x14fdd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14fdd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14fdd8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14fddc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14fddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fde0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FDE0u;
    {
        const bool branch_taken_0x14fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDE0u;
        // 0x14fde4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fde0) {
            ctx->pc = 0x14FDF8u;
            goto label_14fdf8;
        }
    }
    ctx->pc = 0x14FDE8u;
label_14fde8:
    // 0x14fde8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14fdec: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14fdf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14fdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdf4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x14fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_14fdf8:
    // 0x14fdf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14fdfc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14fe00: 0x2442c1c0  addiu       $v0, $v0, -0x3E40
    ctx->pc = 0x14fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951360));
    // 0x14fe04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14fe08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14fe0c: 0x2463c1b8  addiu       $v1, $v1, -0x3E48
    ctx->pc = 0x14fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951352));
    // 0x14fe10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fe14: 0x2505c1a8  addiu       $a1, $t0, -0x3E58
    ctx->pc = 0x14fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951336));
    // 0x14fe18: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14fe1c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14fe20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14fe24: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x14fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14fe28: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14FE28u;
    SET_GPR_U32(ctx, 31, 0x14FE30u);
    ctx->pc = 0x14FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE28u;
    // 0x14fe2c: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14FE28u, 0x14FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE30u;
label_14fe30:
    // 0x14fe30: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14fe34: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FE34u;
    SET_GPR_U32(ctx, 31, 0x14FE3Cu);
    ctx->pc = 0x14FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE34u;
    // 0x14fe38: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FE34u, 0x14FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE3Cu;
label_14fe3c:
    // 0x14fe3c: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14fe40: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FE40u;
    SET_GPR_U32(ctx, 31, 0x14FE48u);
    ctx->pc = 0x14FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE40u;
    // 0x14fe44: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FE40u, 0x14FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE48u;
label_14fe48:
    // 0x14fe48: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x14fe4c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FE4Cu;
    SET_GPR_U32(ctx, 31, 0x14FE54u);
    ctx->pc = 0x14FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE4Cu;
    // 0x14fe50: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FE4Cu, 0x14FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE54u;
label_14fe54:
    // 0x14fe54: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x14fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x14fe58: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FE58u;
    SET_GPR_U32(ctx, 31, 0x14FE60u);
    ctx->pc = 0x14FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE58u;
    // 0x14fe5c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FE58u, 0x14FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE60u;
label_14fe60:
    // 0x14fe60: 0x142400  sll         $a0, $s4, 16
    ctx->pc = 0x14fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x14fe64: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FE64u;
    SET_GPR_U32(ctx, 31, 0x14FE6Cu);
    ctx->pc = 0x14FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE64u;
    // 0x14fe68: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FE64u, 0x14FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE6Cu;
label_14fe6c:
    // 0x14fe6c: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x14fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x14fe70: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FE70u;
    SET_GPR_U32(ctx, 31, 0x14FE78u);
    ctx->pc = 0x14FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE70u;
    // 0x14fe74: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FE70u, 0x14FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE78u;
label_14fe78:
    // 0x14fe78: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14FE78u;
    SET_GPR_U32(ctx, 31, 0x14FE80u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14FE78u, 0x14FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE80u;
label_14fe80:
    // 0x14fe80: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FE80u;
    SET_GPR_U32(ctx, 31, 0x14FE88u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FE80u, 0x14FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE88u;
label_14fe88:
    // 0x14fe88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fe88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fe8c:
    // 0x14fe8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14fe8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fe90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14fe90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fe94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14fe94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14fe98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14fe9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fea0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x14fea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fea8: 0x3e00008  jr          $ra
    ctx->pc = 0x14FEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEA8u;
        // 0x14feac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FEB0u;
}
