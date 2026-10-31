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

// Function: sub_00222980
// Address: 0x222980 - 0x222a48
void sub_00222980_0x222980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222980_0x222980");
#endif

    switch (ctx->pc) {
        case 0x2229c4u: goto label_2229c4;
        case 0x2229d4u: goto label_2229d4;
        case 0x222a20u: goto label_222a20;
        default: break;
    }

    ctx->pc = 0x222980u;

    // 0x222980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222988: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x222988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22298c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22298cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222994: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x222994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x222998: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222998u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22299c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22299Cu;
    {
        const bool branch_taken_0x22299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22299Cu;
        // 0x2229a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22299c) {
            ctx->pc = 0x2229DCu;
            goto label_2229dc;
        }
    }
    ctx->pc = 0x2229A4u;
    // 0x2229a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2229a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2229a8: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2229a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2229ac: 0x8c50489c  lw          $s0, 0x489C($v0)
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2229b0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2229b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2229b8: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x2229bc: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2229BCu;
    SET_GPR_U32(ctx, 31, 0x2229C4u);
    ctx->pc = 0x2229C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229BCu;
    // 0x2229c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2229BCu, 0x2229C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229C4u;
label_2229c4:
    // 0x2229c4: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2229c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2229c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229cc: 0xc107908  jal         func_41E420
    ctx->pc = 0x2229CCu;
    SET_GPR_U32(ctx, 31, 0x2229D4u);
    ctx->pc = 0x2229D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229CCu;
    // 0x2229d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2229CCu, 0x2229D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229D4u;
label_2229d4:
    // 0x2229d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2229D4u;
    {
        const bool branch_taken_0x2229d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229D4u;
        // 0x2229d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229d4) {
            ctx->pc = 0x222A24u;
            goto label_222a24;
        }
    }
    ctx->pc = 0x2229DCu;
label_2229dc:
    // 0x2229dc: 0x92220378  lbu         $v0, 0x378($s1)
    ctx->pc = 0x2229dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 888)));
    // 0x2229e0: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2229e4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2229e8: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2229e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2229ec: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2229ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2229f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2229F0u;
    {
        const bool branch_taken_0x2229f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229F0u;
        // 0x2229f4: 0xa2250378  sb          $a1, 0x378($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 888), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229f0) {
            ctx->pc = 0x222A00u;
            goto label_222a00;
        }
    }
    ctx->pc = 0x2229F8u;
    // 0x2229f8: 0x58600006  blezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2229F8u;
    {
        const bool branch_taken_0x2229f8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2229f8) {
            ctx->pc = 0x2229FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2229F8u;
            // 0x2229fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222A14u;
            goto label_222a14;
        }
    }
    ctx->pc = 0x222A00u;
label_222a00:
    // 0x222a00: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x222a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x222a04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222A04u;
    {
        const bool branch_taken_0x222a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a04) {
            ctx->pc = 0x222A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222A04u;
            // 0x222a08: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222A14u;
            goto label_222a14;
        }
    }
    ctx->pc = 0x222A0Cu;
    // 0x222a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222A0Cu;
    {
        const bool branch_taken_0x222a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A0Cu;
        // 0x222a10: 0xa2250378  sb          $a1, 0x378($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 888), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a0c) {
            ctx->pc = 0x222A18u;
            goto label_222a18;
        }
    }
    ctx->pc = 0x222A14u;
label_222a14:
    // 0x222a14: 0xa2250378  sb          $a1, 0x378($s1)
    ctx->pc = 0x222a14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 888), (uint8_t)GPR_U32(ctx, 5));
label_222a18:
    // 0x222a18: 0xc088a42  jal         func_222908
    ctx->pc = 0x222A18u;
    SET_GPR_U32(ctx, 31, 0x222A20u);
    ctx->pc = 0x222A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A18u;
    // 0x222a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x222A18u, 0x222A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A20u;
label_222a20:
    // 0x222a20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x222a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_222a24:
    // 0x222a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x222A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A2Cu;
        // 0x222a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222A34u;
    // 0x222a34: 0x0  nop
    ctx->pc = 0x222a34u;
    // NOP
    // 0x222a38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x222a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222a3c: 0x0  nop
    ctx->pc = 0x222a3cu;
    // NOP
    // 0x222a40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222a44: 0x0  nop
    ctx->pc = 0x222a44u;
    // NOP
    ctx->pc = 0x222a48u;
}
