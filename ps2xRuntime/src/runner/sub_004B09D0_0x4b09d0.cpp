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

// Function: sub_004B09D0
// Address: 0x4b09d0 - 0x4b0a80
void sub_004B09D0_0x4b09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B09D0_0x4b09d0");
#endif

    switch (ctx->pc) {
        case 0x4b09d0u: goto label_4b09d0;
        case 0x4b09d4u: goto label_4b09d4;
        case 0x4b09d8u: goto label_4b09d8;
        case 0x4b09dcu: goto label_4b09dc;
        case 0x4b09e0u: goto label_4b09e0;
        case 0x4b09e4u: goto label_4b09e4;
        case 0x4b09e8u: goto label_4b09e8;
        case 0x4b09ecu: goto label_4b09ec;
        case 0x4b09f0u: goto label_4b09f0;
        case 0x4b09f4u: goto label_4b09f4;
        case 0x4b09f8u: goto label_4b09f8;
        case 0x4b09fcu: goto label_4b09fc;
        case 0x4b0a00u: goto label_4b0a00;
        case 0x4b0a04u: goto label_4b0a04;
        case 0x4b0a08u: goto label_4b0a08;
        case 0x4b0a0cu: goto label_4b0a0c;
        case 0x4b0a10u: goto label_4b0a10;
        case 0x4b0a14u: goto label_4b0a14;
        case 0x4b0a18u: goto label_4b0a18;
        case 0x4b0a1cu: goto label_4b0a1c;
        case 0x4b0a20u: goto label_4b0a20;
        case 0x4b0a24u: goto label_4b0a24;
        case 0x4b0a28u: goto label_4b0a28;
        case 0x4b0a2cu: goto label_4b0a2c;
        case 0x4b0a30u: goto label_4b0a30;
        case 0x4b0a34u: goto label_4b0a34;
        case 0x4b0a38u: goto label_4b0a38;
        case 0x4b0a3cu: goto label_4b0a3c;
        case 0x4b0a40u: goto label_4b0a40;
        case 0x4b0a44u: goto label_4b0a44;
        case 0x4b0a48u: goto label_4b0a48;
        case 0x4b0a4cu: goto label_4b0a4c;
        case 0x4b0a50u: goto label_4b0a50;
        case 0x4b0a54u: goto label_4b0a54;
        case 0x4b0a58u: goto label_4b0a58;
        case 0x4b0a5cu: goto label_4b0a5c;
        case 0x4b0a60u: goto label_4b0a60;
        case 0x4b0a64u: goto label_4b0a64;
        case 0x4b0a68u: goto label_4b0a68;
        case 0x4b0a6cu: goto label_4b0a6c;
        case 0x4b0a70u: goto label_4b0a70;
        case 0x4b0a74u: goto label_4b0a74;
        case 0x4b0a78u: goto label_4b0a78;
        case 0x4b0a7cu: goto label_4b0a7c;
        default: break;
    }

    ctx->pc = 0x4b09d0u;

label_4b09d0:
    // 0x4b09d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b09d4:
    // 0x4b09d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b09d8:
    // 0x4b09d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b09dc:
    // 0x4b09dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b09dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b09e0:
    // 0x4b09e0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4b09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b09e4:
    // 0x4b09e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4b09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b09e8:
    // 0x4b09e8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4b09e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b09ec:
    // 0x4b09ec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4b09f0:
    if (ctx->pc == 0x4B09F0u) {
        ctx->pc = 0x4B09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B09ECu;
        // 0x4b09f0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B09F4u;
        goto label_4b09f4;
    }
    ctx->pc = 0x4B09ECu;
    {
        const bool branch_taken_0x4b09ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b09ec) {
            ctx->pc = 0x4B09F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B09ECu;
            // 0x4b09f0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0A20u;
            goto label_4b0a20;
        }
    }
    ctx->pc = 0x4B09F4u;
label_4b09f4:
    // 0x4b09f4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b09f8:
    // 0x4b09f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b09f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b09fc:
    // 0x4b09fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4b09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4b0a00:
    // 0x4b0a00: 0x40f809  jalr        $v0
label_4b0a04:
    if (ctx->pc == 0x4B0A04u) {
        ctx->pc = 0x4B0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A00u;
        // 0x4b0a04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A08u;
        goto label_4b0a08;
    }
    ctx->pc = 0x4B0A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0A08u);
        ctx->pc = 0x4B0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A00u;
        // 0x4b0a04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0A00u, 0x4B0A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0A08u;
label_4b0a08:
    // 0x4b0a08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0a0c:
    // 0x4b0a0c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_4b0a10:
    if (ctx->pc == 0x4B0A10u) {
        ctx->pc = 0x4B0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A0Cu;
        // 0x4b0a10: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A14u;
        goto label_4b0a14;
    }
    ctx->pc = 0x4B0A0Cu;
    {
        const bool branch_taken_0x4b0a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b0a0c) {
            ctx->pc = 0x4B0A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0A0Cu;
            // 0x4b0a10: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0A1Cu;
            goto label_4b0a1c;
        }
    }
    ctx->pc = 0x4B0A14u;
label_4b0a14:
    // 0x4b0a14: 0x10000015  b           . + 4 + (0x15 << 2)
label_4b0a18:
    if (ctx->pc == 0x4B0A18u) {
        ctx->pc = 0x4B0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A14u;
        // 0x4b0a18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A1Cu;
        goto label_4b0a1c;
    }
    ctx->pc = 0x4B0A14u;
    {
        const bool branch_taken_0x4b0a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A14u;
        // 0x4b0a18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0a14) {
            ctx->pc = 0x4B0A6Cu;
            goto label_4b0a6c;
        }
    }
    ctx->pc = 0x4B0A1Cu;
label_4b0a1c:
    // 0x4b0a1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4b0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b0a20:
    // 0x4b0a20: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x4b0a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_4b0a24:
    // 0x4b0a24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4b0a28:
    if (ctx->pc == 0x4B0A28u) {
        ctx->pc = 0x4B0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A24u;
        // 0x4b0a28: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A2Cu;
        goto label_4b0a2c;
    }
    ctx->pc = 0x4B0A24u;
    {
        const bool branch_taken_0x4b0a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0a24) {
            ctx->pc = 0x4B0A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0A24u;
            // 0x4b0a28: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0A38u;
            goto label_4b0a38;
        }
    }
    ctx->pc = 0x4B0A2Cu;
label_4b0a2c:
    // 0x4b0a2c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4b0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4b0a30:
    // 0x4b0a30: 0x10000006  b           . + 4 + (0x6 << 2)
label_4b0a34:
    if (ctx->pc == 0x4B0A34u) {
        ctx->pc = 0x4B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A30u;
        // 0x4b0a34: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A38u;
        goto label_4b0a38;
    }
    ctx->pc = 0x4B0A30u;
    {
        const bool branch_taken_0x4b0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A30u;
        // 0x4b0a34: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0a30) {
            ctx->pc = 0x4B0A4Cu;
            goto label_4b0a4c;
        }
    }
    ctx->pc = 0x4B0A38u;
label_4b0a38:
    // 0x4b0a38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b0a3c:
    // 0x4b0a3c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4b0a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b0a40:
    // 0x4b0a40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4b0a44:
    if (ctx->pc == 0x4B0A44u) {
        ctx->pc = 0x4B0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A40u;
        // 0x4b0a44: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A48u;
        goto label_4b0a48;
    }
    ctx->pc = 0x4B0A40u;
    {
        const bool branch_taken_0x4b0a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A40u;
        // 0x4b0a44: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0a40) {
            ctx->pc = 0x4B0A4Cu;
            goto label_4b0a4c;
        }
    }
    ctx->pc = 0x4B0A48u;
label_4b0a48:
    // 0x4b0a48: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4b0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_4b0a4c:
    // 0x4b0a4c: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x4b0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_4b0a50:
    // 0x4b0a50: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4b0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4b0a54:
    // 0x4b0a54: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4b0a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4b0a58:
    // 0x4b0a58: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x4b0a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_4b0a5c:
    // 0x4b0a5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b0a60:
    // 0x4b0a60: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4b0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4b0a64:
    // 0x4b0a64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b0a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0a68:
    // 0x4b0a68: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x4b0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_4b0a6c:
    // 0x4b0a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b0a70:
    // 0x4b0a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0a74:
    // 0x4b0a74: 0x3e00008  jr          $ra
label_4b0a78:
    if (ctx->pc == 0x4B0A78u) {
        ctx->pc = 0x4B0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A74u;
        // 0x4b0a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0A7Cu;
        goto label_4b0a7c;
    }
    ctx->pc = 0x4B0A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A74u;
        // 0x4b0a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0A7Cu;
label_4b0a7c:
    // 0x4b0a7c: 0x0  nop
    ctx->pc = 0x4b0a7cu;
    // NOP
    ctx->pc = 0x4b0a80u;
}
