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

// Function: sub_0031C0E0
// Address: 0x31c0e0 - 0x31c1d0
void sub_0031C0E0_0x31c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C0E0_0x31c0e0");
#endif

    switch (ctx->pc) {
        case 0x31c110u: goto label_31c110;
        case 0x31c118u: goto label_31c118;
        case 0x31c128u: goto label_31c128;
        case 0x31c14cu: goto label_31c14c;
        case 0x31c15cu: goto label_31c15c;
        case 0x31c168u: goto label_31c168;
        case 0x31c170u: goto label_31c170;
        case 0x31c178u: goto label_31c178;
        case 0x31c198u: goto label_31c198;
        case 0x31c1a4u: goto label_31c1a4;
        default: break;
    }

    ctx->pc = 0x31c0e0u;

    // 0x31c0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31c0e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31c0e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31c0ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31c0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31c0f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31c0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31c0fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31c100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c104: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c108: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x31c108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31c10c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31c10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c110:
    // 0x31c110: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31C110u;
    SET_GPR_U32(ctx, 31, 0x31C118u);
    ctx->pc = 0x31C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C110u;
    // 0x31c114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31C110u, 0x31C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C118u;
label_31c118:
    // 0x31c118: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31c118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31c11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c120: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31C120u;
    SET_GPR_U32(ctx, 31, 0x31C128u);
    ctx->pc = 0x31C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C120u;
    // 0x31c124: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31C120u, 0x31C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C128u;
label_31c128:
    // 0x31c128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c12c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x31C12Cu;
    {
        const bool branch_taken_0x31c12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C12Cu;
        // 0x31c130: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c12c) {
            ctx->pc = 0x31C1A8u;
            goto label_31c1a8;
        }
    }
    ctx->pc = 0x31C134u;
    // 0x31c134: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31c134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x31c138: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31c138u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31c13c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31C13Cu;
    {
        const bool branch_taken_0x31c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C13Cu;
        // 0x31c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c13c) {
            ctx->pc = 0x31C1A4u;
            goto label_31c1a4;
        }
    }
    ctx->pc = 0x31C144u;
    // 0x31c144: 0xc089f98  jal         func_227E60
    ctx->pc = 0x31C144u;
    SET_GPR_U32(ctx, 31, 0x31C14Cu);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31C144u, 0x31C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C14Cu;
label_31c14c:
    // 0x31c14c: 0x10510016  beq         $v0, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31C14Cu;
    {
        const bool branch_taken_0x31c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x31C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C14Cu;
        // 0x31c150: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c14c) {
            ctx->pc = 0x31C1A8u;
            goto label_31c1a8;
        }
    }
    ctx->pc = 0x31C154u;
    // 0x31c154: 0xc087502  jal         func_21D408
    ctx->pc = 0x31C154u;
    SET_GPR_U32(ctx, 31, 0x31C15Cu);
    ctx->pc = 0x31C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C154u;
    // 0x31c158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31C154u, 0x31C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C15Cu;
label_31c15c:
    // 0x31c15c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31c15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c160: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x31C160u;
    SET_GPR_U32(ctx, 31, 0x31C168u);
    ctx->pc = 0x31C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C160u;
    // 0x31c164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31C160u, 0x31C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C168u;
label_31c168:
    // 0x31c168: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x31C168u;
    SET_GPR_U32(ctx, 31, 0x31C170u);
    ctx->pc = 0x31C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C168u;
    // 0x31c16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31C168u, 0x31C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C170u;
label_31c170:
    // 0x31c170: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x31C170u;
    SET_GPR_U32(ctx, 31, 0x31C178u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31C170u, 0x31C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C178u;
label_31c178:
    // 0x31c178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c17c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c180: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C180u;
    {
        const bool branch_taken_0x31c180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C180u;
        // 0x31c184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c180) {
            ctx->pc = 0x31C198u;
            goto label_31c198;
        }
    }
    ctx->pc = 0x31C188u;
    // 0x31c188: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x31c188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x31c18c: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x31c18cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x31c190: 0xc0b3838  jal         func_2CE0E0
    ctx->pc = 0x31C190u;
    SET_GPR_U32(ctx, 31, 0x31C198u);
    ctx->pc = 0x31C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C190u;
    // 0x31c194: 0xc64c0030  lwc1        $f12, 0x30($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0E0u, 0x31C190u, 0x31C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C198u;
label_31c198:
    // 0x31c198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c19c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31C19Cu;
    SET_GPR_U32(ctx, 31, 0x31C1A4u);
    ctx->pc = 0x31C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C19Cu;
    // 0x31c1a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31C19Cu, 0x31C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1A4u;
label_31c1a4:
    // 0x31c1a4: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31c1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31c1a8:
    // 0x31c1a8: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x31C1A8u;
    {
        const bool branch_taken_0x31c1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c1a8) {
            ctx->pc = 0x31C1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C1A8u;
            // 0x31c1ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c110;
        }
    }
    ctx->pc = 0x31C1B0u;
    // 0x31c1b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31c1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c1b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31c1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c1b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31c1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c1bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31c1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c1c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31c1c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31C1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1C8u;
        // 0x31c1cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C1D0u;
}
