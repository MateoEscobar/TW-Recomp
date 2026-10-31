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

// Function: sub_002C68B8
// Address: 0x2c68b8 - 0x2c6948
void sub_002C68B8_0x2c68b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C68B8_0x2c68b8");
#endif

    switch (ctx->pc) {
        case 0x2c68e4u: goto label_2c68e4;
        case 0x2c68ecu: goto label_2c68ec;
        case 0x2c68fcu: goto label_2c68fc;
        case 0x2c6904u: goto label_2c6904;
        case 0x2c6920u: goto label_2c6920;
        case 0x2c692cu: goto label_2c692c;
        default: break;
    }

    ctx->pc = 0x2c68b8u;

    // 0x2c68b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c68b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c68bc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c68c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c68c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c68c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c68c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c68c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c68c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c68cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c68ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c68d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c68d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c68d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c68d8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2c68d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c68dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2C68DCu;
    SET_GPR_U32(ctx, 31, 0x2C68E4u);
    ctx->pc = 0x2C68E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C68DCu;
    // 0x2c68e0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C68DCu, 0x2C68E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68E4u;
label_2c68e4:
    // 0x2c68e4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2C68E4u;
    SET_GPR_U32(ctx, 31, 0x2C68ECu);
    ctx->pc = 0x2C68E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C68E4u;
    // 0x2c68e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C68E4u, 0x2C68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68ECu;
label_2c68ec:
    // 0x2c68ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C68ECu;
    {
        const bool branch_taken_0x2c68ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C68F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68ECu;
        // 0x2c68f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68ec) {
            ctx->pc = 0x2C6930u;
            goto label_2c6930;
        }
    }
    ctx->pc = 0x2C68F4u;
    // 0x2c68f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C68F4u;
    SET_GPR_U32(ctx, 31, 0x2C68FCu);
    ctx->pc = 0x2C68F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C68F4u;
    // 0x2c68f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C68F4u, 0x2C68FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68FCu;
label_2c68fc:
    // 0x2c68fc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C68FCu;
    SET_GPR_U32(ctx, 31, 0x2C6904u);
    ctx->pc = 0x2C6900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C68FCu;
    // 0x2c6900: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C68FCu, 0x2C6904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6904u;
label_2c6904:
    // 0x2c6904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6908: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6908u;
    {
        const bool branch_taken_0x2c6908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6908u;
        // 0x2c690c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6908) {
            ctx->pc = 0x2C6920u;
            goto label_2c6920;
        }
    }
    ctx->pc = 0x2C6910u;
    // 0x2c6910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6918: 0xc0b1a52  jal         func_2C6948
    ctx->pc = 0x2C6918u;
    SET_GPR_U32(ctx, 31, 0x2C6920u);
    ctx->pc = 0x2C691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6918u;
    // 0x2c691c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6948u, 0x2C6918u, 0x2C6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6920u;
label_2c6920:
    // 0x2c6920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6924: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C6924u;
    SET_GPR_U32(ctx, 31, 0x2C692Cu);
    ctx->pc = 0x2C6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6924u;
    // 0x2c6928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C6924u, 0x2C692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C692Cu;
label_2c692c:
    // 0x2c692c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c692cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c6930:
    // 0x2c6930: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c6930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6934: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c6934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c693c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C693Cu;
        // 0x2c6940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6944u;
    // 0x2c6944: 0x0  nop
    ctx->pc = 0x2c6944u;
    // NOP
    ctx->pc = 0x2c6948u;
}
