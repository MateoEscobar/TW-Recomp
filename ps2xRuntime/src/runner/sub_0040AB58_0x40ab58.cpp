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

// Function: sub_0040AB58
// Address: 0x40ab58 - 0x40abf8
void sub_0040AB58_0x40ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AB58_0x40ab58");
#endif

    switch (ctx->pc) {
        case 0x40ab70u: goto label_40ab70;
        case 0x40ab80u: goto label_40ab80;
        case 0x40ab94u: goto label_40ab94;
        case 0x40abacu: goto label_40abac;
        case 0x40abb8u: goto label_40abb8;
        case 0x40abc4u: goto label_40abc4;
        case 0x40abd0u: goto label_40abd0;
        case 0x40abdcu: goto label_40abdc;
        default: break;
    }

    ctx->pc = 0x40ab58u;

    // 0x40ab58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40ab5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40ab60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40ab64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40ab68: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40AB68u;
    SET_GPR_U32(ctx, 31, 0x40AB70u);
    ctx->pc = 0x40AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB68u;
    // 0x40ab6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40AB68u, 0x40AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB70u;
label_40ab70:
    // 0x40ab70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40ab70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ab74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ab78: 0xc0c8d6e  jal         func_3235B8
    ctx->pc = 0x40AB78u;
    SET_GPR_U32(ctx, 31, 0x40AB80u);
    ctx->pc = 0x40AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB78u;
    // 0x40ab7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235B8u, 0x40AB78u, 0x40AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB80u;
label_40ab80:
    // 0x40ab80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40AB80u;
    {
        const bool branch_taken_0x40ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ab80) {
            ctx->pc = 0x40ABA4u;
            goto label_40aba4;
        }
    }
    ctx->pc = 0x40AB88u;
    // 0x40ab88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ab8c: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x40AB8Cu;
    SET_GPR_U32(ctx, 31, 0x40AB94u);
    ctx->pc = 0x40AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AB8Cu;
    // 0x40ab90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x40AB8Cu, 0x40AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AB94u;
label_40ab94:
    // 0x40ab94: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x40ab94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40ab98: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x40ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x40ab9c: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x40AB9Cu;
    {
        const bool branch_taken_0x40ab9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x40ab9c) {
            ctx->pc = 0x40ABA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40AB9Cu;
            // 0x40aba0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40ABE0u;
            goto label_40abe0;
        }
    }
    ctx->pc = 0x40ABA4u;
label_40aba4:
    // 0x40aba4: 0xc0c8f36  jal         func_323CD8
    ctx->pc = 0x40ABA4u;
    SET_GPR_U32(ctx, 31, 0x40ABACu);
    ctx->pc = 0x40ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ABA4u;
    // 0x40aba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323CD8u, 0x40ABA4u, 0x40ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ABACu;
label_40abac:
    // 0x40abac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40abacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40abb0: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40ABB0u;
    SET_GPR_U32(ctx, 31, 0x40ABB8u);
    ctx->pc = 0x40ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ABB0u;
    // 0x40abb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40ABB0u, 0x40ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ABB8u;
label_40abb8:
    // 0x40abb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40abb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40abbc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40ABBCu;
    SET_GPR_U32(ctx, 31, 0x40ABC4u);
    ctx->pc = 0x40ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ABBCu;
    // 0x40abc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40ABBCu, 0x40ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ABC4u;
label_40abc4:
    // 0x40abc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40abc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40abc8: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x40ABC8u;
    SET_GPR_U32(ctx, 31, 0x40ABD0u);
    ctx->pc = 0x40ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ABC8u;
    // 0x40abcc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x40ABC8u, 0x40ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ABD0u;
label_40abd0:
    // 0x40abd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40abd4: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40ABD4u;
    SET_GPR_U32(ctx, 31, 0x40ABDCu);
    ctx->pc = 0x40ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ABD4u;
    // 0x40abd8: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40ABD4u, 0x40ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ABDCu;
label_40abdc:
    // 0x40abdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40abe0:
    // 0x40abe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40abe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40abe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40abe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40abe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40abec: 0x3e00008  jr          $ra
    ctx->pc = 0x40ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ABECu;
        // 0x40abf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40ABF4u;
    // 0x40abf4: 0x0  nop
    ctx->pc = 0x40abf4u;
    // NOP
    ctx->pc = 0x40abf8u;
}
