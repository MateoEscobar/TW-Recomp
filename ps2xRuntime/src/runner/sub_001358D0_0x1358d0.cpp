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

// Function: sub_001358D0
// Address: 0x1358d0 - 0x135960
void sub_001358D0_0x1358d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001358D0_0x1358d0");
#endif

    switch (ctx->pc) {
        case 0x1358f4u: goto label_1358f4;
        case 0x1358fcu: goto label_1358fc;
        case 0x13590cu: goto label_13590c;
        case 0x13592cu: goto label_13592c;
        case 0x135944u: goto label_135944;
        default: break;
    }

    ctx->pc = 0x1358d0u;

    // 0x1358d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1358d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1358d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1358d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1358d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1358d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1358dc: 0x2490020c  addiu       $s0, $a0, 0x20C
    ctx->pc = 0x1358dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 524));
    // 0x1358e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1358e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1358e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1358e8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1358e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1358ec: 0xc136e12  jal         func_4DB848
    ctx->pc = 0x1358ECu;
    SET_GPR_U32(ctx, 31, 0x1358F4u);
    ctx->pc = 0x1358F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358ECu;
    // 0x1358f0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB848u, 0x1358ECu, 0x1358F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1358F4u;
label_1358f4:
    // 0x1358f4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1358F4u;
    SET_GPR_U32(ctx, 31, 0x1358FCu);
    ctx->pc = 0x1358F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358F4u;
    // 0x1358f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1358F4u, 0x1358FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1358FCu;
label_1358fc:
    // 0x1358fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1358FCu;
    {
        const bool branch_taken_0x1358fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358FCu;
        // 0x135900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1358fc) {
            ctx->pc = 0x135944u;
            goto label_135944;
        }
    }
    ctx->pc = 0x135904u;
    // 0x135904: 0xc136e3e  jal         func_4DB8F8
    ctx->pc = 0x135904u;
    SET_GPR_U32(ctx, 31, 0x13590Cu);
    ctx->pc = 0x135908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135904u;
    // 0x135908: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB8F8u, 0x135904u, 0x13590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13590Cu;
label_13590c:
    // 0x13590c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13590cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x135910: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135910u;
    {
        const bool branch_taken_0x135910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x135914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135910u;
        // 0x135914: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135910) {
            ctx->pc = 0x135934u;
            goto label_135934;
        }
    }
    ctx->pc = 0x135918u;
    // 0x135918: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x135918u;
    {
        const bool branch_taken_0x135918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135918) {
            ctx->pc = 0x13591Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135918u;
            // 0x13591c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135948u;
            goto label_135948;
        }
    }
    ctx->pc = 0x135920u;
    // 0x135920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135924: 0xc136e4a  jal         func_4DB928
    ctx->pc = 0x135924u;
    SET_GPR_U32(ctx, 31, 0x13592Cu);
    ctx->pc = 0x135928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135924u;
    // 0x135928: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB928u, 0x135924u, 0x13592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13592Cu;
label_13592c:
    // 0x13592c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13592Cu;
    {
        const bool branch_taken_0x13592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13592Cu;
        // 0x135930: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13592c) {
            ctx->pc = 0x135948u;
            goto label_135948;
        }
    }
    ctx->pc = 0x135934u;
label_135934:
    // 0x135934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135934u;
    {
        const bool branch_taken_0x135934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135934u;
        // 0x135938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135934) {
            ctx->pc = 0x135944u;
            goto label_135944;
        }
    }
    ctx->pc = 0x13593Cu;
    // 0x13593c: 0xc136e62  jal         func_4DB988
    ctx->pc = 0x13593Cu;
    SET_GPR_U32(ctx, 31, 0x135944u);
    ctx->pc = 0x135940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13593Cu;
    // 0x135940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB988u, 0x13593Cu, 0x135944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135944u;
label_135944:
    // 0x135944: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x135944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_135948:
    // 0x135948: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x135948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13594c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135950: 0x3e00008  jr          $ra
    ctx->pc = 0x135950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135950u;
        // 0x135954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135958u;
    // 0x135958: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x135958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13595c: 0x0  nop
    ctx->pc = 0x13595cu;
    // NOP
    ctx->pc = 0x135960u;
}
