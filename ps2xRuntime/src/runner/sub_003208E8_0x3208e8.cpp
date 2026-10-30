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

// Function: sub_003208E8
// Address: 0x3208e8 - 0x3209b0
void sub_003208E8_0x3208e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208E8_0x3208e8");
#endif

    switch (ctx->pc) {
        case 0x320904u: goto label_320904;
        case 0x32090cu: goto label_32090c;
        case 0x320914u: goto label_320914;
        case 0x320958u: goto label_320958;
        case 0x32096cu: goto label_32096c;
        case 0x320984u: goto label_320984;
        case 0x320990u: goto label_320990;
        default: break;
    }

    ctx->pc = 0x3208e8u;

    // 0x3208e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3208e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3208ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3208ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3208f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3208f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3208f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3208f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3208f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3208f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3208fc: 0xc0c8186  jal         func_320618
    ctx->pc = 0x3208FCu;
    SET_GPR_U32(ctx, 31, 0x320904u);
    ctx->pc = 0x320900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3208FCu;
    // 0x320900: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320618u, 0x3208FCu, 0x320904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320904u;
label_320904:
    // 0x320904: 0xc05a51a  jal         func_169468
    ctx->pc = 0x320904u;
    SET_GPR_U32(ctx, 31, 0x32090Cu);
    ctx->pc = 0x320908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320904u;
    // 0x320908: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169468u, 0x320904u, 0x32090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32090Cu;
label_32090c:
    // 0x32090c: 0xc05959e  jal         func_165678
    ctx->pc = 0x32090Cu;
    SET_GPR_U32(ctx, 31, 0x320914u);
    ctx->pc = 0x320910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32090Cu;
    // 0x320910: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x32090Cu, 0x320914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320914u;
label_320914:
    // 0x320914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320918: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x320918u;
    {
        const bool branch_taken_0x320918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x320918) {
            ctx->pc = 0x32091Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320918u;
            // 0x32091c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3209A0u;
            goto label_3209a0;
        }
    }
    ctx->pc = 0x320920u;
    // 0x320920: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x320920u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x320924: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x320924u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x320928: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x320928u;
    {
        const bool branch_taken_0x320928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320928u;
        // 0x32092c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320928) {
            ctx->pc = 0x320960u;
            goto label_320960;
        }
    }
    ctx->pc = 0x320930u;
    // 0x320930: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x320930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x320934: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x320934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x320938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32093c: 0x90620416  lbu         $v0, 0x416($v1)
    ctx->pc = 0x32093cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1046)));
    // 0x320940: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320940u;
    {
        const bool branch_taken_0x320940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320940u;
        // 0x320944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320940) {
            ctx->pc = 0x320964u;
            goto label_320964;
        }
    }
    ctx->pc = 0x320948u;
    // 0x320948: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x320948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x32094c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320950: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x320950u;
    SET_GPR_U32(ctx, 31, 0x320958u);
    ctx->pc = 0x320954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320950u;
    // 0x320954: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x320950u, 0x320958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320958u;
label_320958:
    // 0x320958: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32095c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32095cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320960:
    // 0x320960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320964:
    // 0x320964: 0xc087502  jal         func_21D408
    ctx->pc = 0x320964u;
    SET_GPR_U32(ctx, 31, 0x32096Cu);
    ctx->pc = 0x320968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320964u;
    // 0x320968: 0xa2250020  sb          $a1, 0x20($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x320964u, 0x32096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32096Cu;
label_32096c:
    // 0x32096c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320974: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x320974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x320978: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32097c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x32097Cu;
    SET_GPR_U32(ctx, 31, 0x320984u);
    ctx->pc = 0x320980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32097Cu;
    // 0x320980: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x32097Cu, 0x320984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320984u;
label_320984:
    // 0x320984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320988: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x320988u;
    SET_GPR_U32(ctx, 31, 0x320990u);
    ctx->pc = 0x32098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320988u;
    // 0x32098c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x320988u, 0x320990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320990u;
label_320990:
    // 0x320990: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x320990u;
    {
        const bool branch_taken_0x320990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320990u;
        // 0x320994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320990) {
            ctx->pc = 0x32099Cu;
            goto label_32099c;
        }
    }
    ctx->pc = 0x320998u;
    // 0x320998: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x320998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
label_32099c:
    // 0x32099c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3209a0:
    // 0x3209a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3209a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3209a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3209a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3209a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3209A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3209ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209A8u;
        // 0x3209ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3209B0u;
}
