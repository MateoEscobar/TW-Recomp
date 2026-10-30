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

// Function: sub_00485998
// Address: 0x485998 - 0x485aa8
void sub_00485998_0x485998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485998_0x485998");
#endif

    switch (ctx->pc) {
        case 0x485998u: goto label_485998;
        case 0x48599cu: goto label_48599c;
        case 0x4859a0u: goto label_4859a0;
        case 0x4859a4u: goto label_4859a4;
        case 0x4859a8u: goto label_4859a8;
        case 0x4859acu: goto label_4859ac;
        case 0x4859b0u: goto label_4859b0;
        case 0x4859b4u: goto label_4859b4;
        case 0x4859b8u: goto label_4859b8;
        case 0x4859bcu: goto label_4859bc;
        case 0x4859c0u: goto label_4859c0;
        case 0x4859c4u: goto label_4859c4;
        case 0x4859c8u: goto label_4859c8;
        case 0x4859ccu: goto label_4859cc;
        case 0x4859d0u: goto label_4859d0;
        case 0x4859d4u: goto label_4859d4;
        case 0x4859d8u: goto label_4859d8;
        case 0x4859dcu: goto label_4859dc;
        case 0x4859e0u: goto label_4859e0;
        case 0x4859e4u: goto label_4859e4;
        case 0x4859e8u: goto label_4859e8;
        case 0x4859ecu: goto label_4859ec;
        case 0x4859f0u: goto label_4859f0;
        case 0x4859f4u: goto label_4859f4;
        case 0x4859f8u: goto label_4859f8;
        case 0x4859fcu: goto label_4859fc;
        case 0x485a00u: goto label_485a00;
        case 0x485a04u: goto label_485a04;
        case 0x485a08u: goto label_485a08;
        case 0x485a0cu: goto label_485a0c;
        case 0x485a10u: goto label_485a10;
        case 0x485a14u: goto label_485a14;
        case 0x485a18u: goto label_485a18;
        case 0x485a1cu: goto label_485a1c;
        case 0x485a20u: goto label_485a20;
        case 0x485a24u: goto label_485a24;
        case 0x485a28u: goto label_485a28;
        case 0x485a2cu: goto label_485a2c;
        case 0x485a30u: goto label_485a30;
        case 0x485a34u: goto label_485a34;
        case 0x485a38u: goto label_485a38;
        case 0x485a3cu: goto label_485a3c;
        case 0x485a40u: goto label_485a40;
        case 0x485a44u: goto label_485a44;
        case 0x485a48u: goto label_485a48;
        case 0x485a4cu: goto label_485a4c;
        case 0x485a50u: goto label_485a50;
        case 0x485a54u: goto label_485a54;
        case 0x485a58u: goto label_485a58;
        case 0x485a5cu: goto label_485a5c;
        case 0x485a60u: goto label_485a60;
        case 0x485a64u: goto label_485a64;
        case 0x485a68u: goto label_485a68;
        case 0x485a6cu: goto label_485a6c;
        case 0x485a70u: goto label_485a70;
        case 0x485a74u: goto label_485a74;
        case 0x485a78u: goto label_485a78;
        case 0x485a7cu: goto label_485a7c;
        case 0x485a80u: goto label_485a80;
        case 0x485a84u: goto label_485a84;
        case 0x485a88u: goto label_485a88;
        case 0x485a8cu: goto label_485a8c;
        case 0x485a90u: goto label_485a90;
        case 0x485a94u: goto label_485a94;
        case 0x485a98u: goto label_485a98;
        case 0x485a9cu: goto label_485a9c;
        case 0x485aa0u: goto label_485aa0;
        case 0x485aa4u: goto label_485aa4;
        default: break;
    }

    ctx->pc = 0x485998u;

label_485998:
    // 0x485998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x485998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48599c:
    // 0x48599c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4859a0:
    // 0x4859a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4859a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4859a4:
    // 0x4859a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4859a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4859a8:
    // 0x4859a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4859a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4859ac:
    // 0x4859ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4859acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4859b0:
    // 0x4859b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4859b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4859b4:
    // 0x4859b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4859b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4859b8:
    // 0x4859b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4859b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4859bc:
    // 0x4859bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4859c0:
    if (ctx->pc == 0x4859C0u) {
        ctx->pc = 0x4859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4859BCu;
        // 0x4859c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4859C4u;
        goto label_4859c4;
    }
    ctx->pc = 0x4859BCu;
    {
        const bool branch_taken_0x4859bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4859BCu;
        // 0x4859c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4859bc) {
            ctx->pc = 0x4859D0u;
            goto label_4859d0;
        }
    }
    ctx->pc = 0x4859C4u;
label_4859c4:
    // 0x4859c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4859c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4859c8:
    // 0x4859c8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_4859cc:
    if (ctx->pc == 0x4859CCu) {
        ctx->pc = 0x4859D0u;
        goto label_4859d0;
    }
    ctx->pc = 0x4859C8u;
    {
        const bool branch_taken_0x4859c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4859c8) {
            ctx->pc = 0x4859D4u;
            goto label_4859d4;
        }
    }
    ctx->pc = 0x4859D0u;
label_4859d0:
    // 0x4859d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4859d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4859d4:
    // 0x4859d4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_4859d8:
    if (ctx->pc == 0x4859D8u) {
        ctx->pc = 0x4859D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4859D4u;
        // 0x4859d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4859DCu;
        goto label_4859dc;
    }
    ctx->pc = 0x4859D4u;
    {
        const bool branch_taken_0x4859d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4859D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4859D4u;
        // 0x4859d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4859d4) {
            ctx->pc = 0x4859F0u;
            goto label_4859f0;
        }
    }
    ctx->pc = 0x4859DCu;
label_4859dc:
    // 0x4859dc: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x4859dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_4859e0:
    // 0x4859e0: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x4859e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_4859e4:
    // 0x4859e4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x4859e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_4859e8:
    // 0x4859e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4859ec:
    if (ctx->pc == 0x4859ECu) {
        ctx->pc = 0x4859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4859E8u;
        // 0x4859ec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4859F0u;
        goto label_4859f0;
    }
    ctx->pc = 0x4859E8u;
    {
        const bool branch_taken_0x4859e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4859E8u;
        // 0x4859ec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4859e8) {
            ctx->pc = 0x4859F8u;
            goto label_4859f8;
        }
    }
    ctx->pc = 0x4859F0u;
label_4859f0:
    // 0x4859f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4859f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4859f4:
    // 0x4859f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4859f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4859f8:
    // 0x4859f8: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x4859f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4859fc:
    // 0x4859fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4859fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_485a00:
    // 0x485a00: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x485a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_485a04:
    // 0x485a04: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x485a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_485a08:
    // 0x485a08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x485a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_485a0c:
    // 0x485a0c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x485a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_485a10:
    // 0x485a10: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x485a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_485a14:
    // 0x485a14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x485a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_485a18:
    // 0x485a18: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x485a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_485a1c:
    // 0x485a1c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x485a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_485a20:
    // 0x485a20: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x485a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_485a24:
    // 0x485a24: 0x449018  mult        $s2, $v0, $a0
    ctx->pc = 0x485a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_485a28:
    // 0x485a28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x485a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_485a2c:
    // 0x485a2c: 0x8ce2ae20  lw          $v0, -0x51E0($a3)
    ctx->pc = 0x485a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946336)));
label_485a30:
    // 0x485a30: 0x2488021  addu        $s0, $s2, $t0
    ctx->pc = 0x485a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_485a34:
    // 0x485a34: 0x40f809  jalr        $v0
label_485a38:
    if (ctx->pc == 0x485A38u) {
        ctx->pc = 0x485A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A34u;
        // 0x485a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485A3Cu;
        goto label_485a3c;
    }
    ctx->pc = 0x485A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485A3Cu);
        ctx->pc = 0x485A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A34u;
        // 0x485a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485A34u, 0x485A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485A3Cu;
label_485a3c:
    // 0x485a3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_485a40:
    if (ctx->pc == 0x485A40u) {
        ctx->pc = 0x485A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A3Cu;
        // 0x485a40: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485A44u;
        goto label_485a44;
    }
    ctx->pc = 0x485A3Cu;
    {
        const bool branch_taken_0x485a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x485A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A3Cu;
        // 0x485a40: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485a3c) {
            ctx->pc = 0x485A70u;
            goto label_485a70;
        }
    }
    ctx->pc = 0x485A44u;
label_485a44:
    // 0x485a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485a48:
    // 0x485a48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x485a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_485a4c:
    // 0x485a4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x485a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_485a50:
    // 0x485a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x485a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485a54:
    // 0x485a54: 0xc11eff2  jal         func_47BFC8
label_485a58:
    if (ctx->pc == 0x485A58u) {
        ctx->pc = 0x485A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A54u;
        // 0x485a58: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x485A5Cu;
        goto label_485a5c;
    }
    ctx->pc = 0x485A54u;
    SET_GPR_U32(ctx, 31, 0x485A5Cu);
    ctx->pc = 0x485A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485A54u;
    // 0x485a58: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x485A54u, 0x485A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485A5Cu;
label_485a5c:
    // 0x485a5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x485a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_485a60:
    // 0x485a60: 0xc11f024  jal         func_47C090
label_485a64:
    if (ctx->pc == 0x485A64u) {
        ctx->pc = 0x485A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A60u;
        // 0x485a64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485A68u;
        goto label_485a68;
    }
    ctx->pc = 0x485A60u;
    SET_GPR_U32(ctx, 31, 0x485A68u);
    ctx->pc = 0x485A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485A60u;
    // 0x485a64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x485A60u, 0x485A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485A68u;
label_485a68:
    // 0x485a68: 0x10000008  b           . + 4 + (0x8 << 2)
label_485a6c:
    if (ctx->pc == 0x485A6Cu) {
        ctx->pc = 0x485A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A68u;
        // 0x485a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485A70u;
        goto label_485a70;
    }
    ctx->pc = 0x485A68u;
    {
        const bool branch_taken_0x485a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485A68u;
        // 0x485a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485a68) {
            ctx->pc = 0x485A8Cu;
            goto label_485a8c;
        }
    }
    ctx->pc = 0x485A70u;
label_485a70:
    // 0x485a70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x485a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_485a74:
    // 0x485a74: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x485a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_485a78:
    // 0x485a78: 0x13180a  movz        $v1, $zero, $s3
    ctx->pc = 0x485a78u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_485a7c:
    // 0x485a7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x485a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485a80:
    // 0x485a80: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x485a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_485a84:
    // 0x485a84: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x485a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_485a88:
    // 0x485a88: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x485a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_485a8c:
    // 0x485a8c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x485a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_485a90:
    // 0x485a90: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x485a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_485a94:
    // 0x485a94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x485a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_485a98:
    // 0x485a98: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x485a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485a9c:
    // 0x485a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_485aa0:
    // 0x485aa0: 0x3e00008  jr          $ra
label_485aa4:
    if (ctx->pc == 0x485AA4u) {
        ctx->pc = 0x485AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485AA0u;
        // 0x485aa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485AA8u;
        goto label_fallthrough_0x485aa0;
    }
    ctx->pc = 0x485AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485AA0u;
        // 0x485aa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x485aa0:
    ctx->pc = 0x485AA8u;
}
