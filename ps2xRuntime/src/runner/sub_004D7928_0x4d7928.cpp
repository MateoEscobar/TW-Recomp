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

// Function: sub_004D7928
// Address: 0x4d7928 - 0x4d79f0
void sub_004D7928_0x4d7928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7928_0x4d7928");
#endif

    switch (ctx->pc) {
        case 0x4d7968u: goto label_4d7968;
        case 0x4d7978u: goto label_4d7978;
        case 0x4d7984u: goto label_4d7984;
        case 0x4d7990u: goto label_4d7990;
        case 0x4d79b0u: goto label_4d79b0;
        case 0x4d79bcu: goto label_4d79bc;
        case 0x4d79c8u: goto label_4d79c8;
        case 0x4d79d4u: goto label_4d79d4;
        default: break;
    }

    ctx->pc = 0x4d7928u;

    // 0x4d7928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d792c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4d792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4d7930: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7934: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7938: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d7938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d793c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7940: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4d7940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7944: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7948: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D7948u;
    {
        const bool branch_taken_0x4d7948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7948u;
        // 0x4d794c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7948) {
            ctx->pc = 0x4D7998u;
            goto label_4d7998;
        }
    }
    ctx->pc = 0x4D7950u;
    // 0x4d7950: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x4d7950u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d7954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7958: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x4d7958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x4d795c: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x4d795cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4d7960: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D7960u;
    SET_GPR_U32(ctx, 31, 0x4D7968u);
    ctx->pc = 0x4D7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7960u;
    // 0x4d7964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D7960u, 0x4D7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7968u;
label_4d7968:
    // 0x4d7968: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x4d7968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x4d796c: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x4d796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x4d7970: 0xc13593c  jal         func_4D64F0
    ctx->pc = 0x4D7970u;
    SET_GPR_U32(ctx, 31, 0x4D7978u);
    ctx->pc = 0x4D7974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7970u;
    // 0x4d7974: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D64F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D64F0u, 0x4D7970u, 0x4D7978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7978u;
label_4d7978:
    // 0x4d7978: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x4d7978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x4d797c: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D797Cu;
    SET_GPR_U32(ctx, 31, 0x4D7984u);
    ctx->pc = 0x4D7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D797Cu;
    // 0x4d7980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D797Cu, 0x4D7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7984u;
label_4d7984:
    // 0x4d7984: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x4d7984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x4d7988: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D7988u;
    SET_GPR_U32(ctx, 31, 0x4D7990u);
    ctx->pc = 0x4D798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7988u;
    // 0x4d798c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D7988u, 0x4D7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7990u;
label_4d7990:
    // 0x4d7990: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4D7990u;
    {
        const bool branch_taken_0x4d7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7990u;
        // 0x4d7994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7990) {
            ctx->pc = 0x4D79D8u;
            goto label_4d79d8;
        }
    }
    ctx->pc = 0x4D7998u;
label_4d7998:
    // 0x4d7998: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x4d7998u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d799c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d799cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d79a0: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x4d79a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x4d79a4: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x4d79a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4d79a8: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D79A8u;
    SET_GPR_U32(ctx, 31, 0x4D79B0u);
    ctx->pc = 0x4D79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D79A8u;
    // 0x4d79ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D79A8u, 0x4D79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D79B0u;
label_4d79b0:
    // 0x4d79b0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x4d79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4d79b4: 0xc135b52  jal         func_4D6D48
    ctx->pc = 0x4D79B4u;
    SET_GPR_U32(ctx, 31, 0x4D79BCu);
    ctx->pc = 0x4D79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D79B4u;
    // 0x4d79b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6D48u, 0x4D79B4u, 0x4D79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D79BCu;
label_4d79bc:
    // 0x4d79bc: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x4d79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x4d79c0: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D79C0u;
    SET_GPR_U32(ctx, 31, 0x4D79C8u);
    ctx->pc = 0x4D79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D79C0u;
    // 0x4d79c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D79C0u, 0x4D79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D79C8u;
label_4d79c8:
    // 0x4d79c8: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x4d79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x4d79cc: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D79CCu;
    SET_GPR_U32(ctx, 31, 0x4D79D4u);
    ctx->pc = 0x4D79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D79CCu;
    // 0x4d79d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D79CCu, 0x4D79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D79D4u;
label_4d79d4:
    // 0x4d79d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d79d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d79d8:
    // 0x4d79d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d79d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d79dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d79dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d79e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d79e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d79e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d79e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d79e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D79E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D79E8u;
        // 0x4d79ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D79E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D79F0u;
}
