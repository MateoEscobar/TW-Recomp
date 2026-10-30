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

// Function: sub_0029F8E8
// Address: 0x29f8e8 - 0x29f9d0
void sub_0029F8E8_0x29f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F8E8_0x29f8e8");
#endif

    switch (ctx->pc) {
        case 0x29f908u: goto label_29f908;
        case 0x29f918u: goto label_29f918;
        case 0x29f920u: goto label_29f920;
        case 0x29f92cu: goto label_29f92c;
        case 0x29f950u: goto label_29f950;
        case 0x29f960u: goto label_29f960;
        case 0x29f97cu: goto label_29f97c;
        case 0x29f988u: goto label_29f988;
        case 0x29f990u: goto label_29f990;
        default: break;
    }

    ctx->pc = 0x29f8e8u;

    // 0x29f8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29f8ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29f8f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29f8f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29f8f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29f8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f900: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x29F900u;
    SET_GPR_U32(ctx, 31, 0x29F908u);
    ctx->pc = 0x29F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F900u;
    // 0x29f904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x29F900u, 0x29F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F908u;
label_29f908:
    // 0x29f908: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29F908u;
    {
        const bool branch_taken_0x29f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F908u;
        // 0x29f90c: 0x24530048  addiu       $s3, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f908) {
            ctx->pc = 0x29F9B0u;
            goto label_29f9b0;
        }
    }
    ctx->pc = 0x29F910u;
    // 0x29f910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29f918:
    // 0x29f918: 0xc137826  jal         func_4DE098
    ctx->pc = 0x29F918u;
    SET_GPR_U32(ctx, 31, 0x29F920u);
    ctx->pc = 0x29F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F918u;
    // 0x29f91c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29F918u, 0x29F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F920u;
label_29f920:
    // 0x29f920: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29f924: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29F924u;
    SET_GPR_U32(ctx, 31, 0x29F92Cu);
    ctx->pc = 0x29F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F924u;
    // 0x29f928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29F924u, 0x29F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F92Cu;
label_29f92c:
    // 0x29f92c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f930: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29F930u;
    {
        const bool branch_taken_0x29f930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F930u;
        // 0x29f934: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f930) {
            ctx->pc = 0x29F9A4u;
            goto label_29f9a4;
        }
    }
    ctx->pc = 0x29F938u;
    // 0x29f938: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x29f938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x29f93c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29f93cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29f940: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29F940u;
    {
        const bool branch_taken_0x29f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F940u;
        // 0x29f944: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f940) {
            ctx->pc = 0x29F9A8u;
            goto label_29f9a8;
        }
    }
    ctx->pc = 0x29F948u;
    // 0x29f948: 0xc087502  jal         func_21D408
    ctx->pc = 0x29F948u;
    SET_GPR_U32(ctx, 31, 0x29F950u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29F948u, 0x29F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F950u;
label_29f950:
    // 0x29f950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29f950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f954: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29f958: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29F958u;
    SET_GPR_U32(ctx, 31, 0x29F960u);
    ctx->pc = 0x29F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F958u;
    // 0x29f95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29F958u, 0x29F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F960u;
label_29f960:
    // 0x29f960: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29f964: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x29f964u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x29f968: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x29F968u;
    {
        const bool branch_taken_0x29f968 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29f968) {
            ctx->pc = 0x29F96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F968u;
            // 0x29f96c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F9A4u;
            goto label_29f9a4;
        }
    }
    ctx->pc = 0x29F970u;
    // 0x29f970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f974: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x29F974u;
    SET_GPR_U32(ctx, 31, 0x29F97Cu);
    ctx->pc = 0x29F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F974u;
    // 0x29f978: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x29F974u, 0x29F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F97Cu;
label_29f97c:
    // 0x29f97c: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x29f97cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x29f980: 0x50700008  beql        $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F980u;
    {
        const bool branch_taken_0x29f980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x29f980) {
            ctx->pc = 0x29F984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F980u;
            // 0x29f984: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F9A4u;
            goto label_29f9a4;
        }
    }
    ctx->pc = 0x29F988u;
label_29f988:
    // 0x29f988: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x29F988u;
    SET_GPR_U32(ctx, 31, 0x29F990u);
    ctx->pc = 0x29F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F988u;
    // 0x29f98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x29F988u, 0x29F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F990u;
label_29f990:
    // 0x29f990: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x29f990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x29f994: 0x0  nop
    ctx->pc = 0x29f994u;
    // NOP
    // 0x29f998: 0x1470fffb  bne         $v1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29F998u;
    {
        const bool branch_taken_0x29f998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x29f998) {
            ctx->pc = 0x29F988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f988;
        }
    }
    ctx->pc = 0x29F9A0u;
    // 0x29f9a0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x29f9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29f9a4:
    // 0x29f9a4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x29f9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_29f9a8:
    // 0x29f9a8: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x29F9A8u;
    {
        const bool branch_taken_0x29f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f9a8) {
            ctx->pc = 0x29F9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F9A8u;
            // 0x29f9ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f918;
        }
    }
    ctx->pc = 0x29F9B0u;
label_29f9b0:
    // 0x29f9b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29f9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f9b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29f9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f9b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f9bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29f9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9C4u;
        // 0x29f9c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F9CCu;
    // 0x29f9cc: 0x0  nop
    ctx->pc = 0x29f9ccu;
    // NOP
    ctx->pc = 0x29f9d0u;
}
