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

// Function: sub_0033A7D0
// Address: 0x33a7d0 - 0x33a8a8
void sub_0033A7D0_0x33a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A7D0_0x33a7d0");
#endif

    switch (ctx->pc) {
        case 0x33a820u: goto label_33a820;
        case 0x33a848u: goto label_33a848;
        case 0x33a874u: goto label_33a874;
        default: break;
    }

    ctx->pc = 0x33a7d0u;

    // 0x33a7d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x33a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x33a7d4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x33a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x33a7d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x33a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x33a7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7e0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x33a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x33a7e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33a7e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33a7ec: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x33a7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7f0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x33a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x33a7f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x33a7f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7f8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x33a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x33a7fc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x33a7fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a800: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x33a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x33a804: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x33a804u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a808: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x33a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x33a80c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x33a80cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a810: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x33a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x33a814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33a818: 0xc0ce9a4  jal         func_33A690
    ctx->pc = 0x33A818u;
    SET_GPR_U32(ctx, 31, 0x33A820u);
    ctx->pc = 0x33A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A818u;
    // 0x33a81c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A690u, 0x33A818u, 0x33A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A820u;
label_33a820:
    // 0x33a820: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33a820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a828: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33a828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a82c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33a82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a830: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x33a830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a834: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x33a834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a838: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x33a838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a83c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x33a83cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a840: 0xc0ce1c2  jal         func_338708
    ctx->pc = 0x33A840u;
    SET_GPR_U32(ctx, 31, 0x33A848u);
    ctx->pc = 0x33A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A840u;
    // 0x33a844: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338708u, 0x33A840u, 0x33A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A848u;
label_33a848:
    // 0x33a848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33a848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a84c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x33a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x33a850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a854: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x33a854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a858: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33a858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a85c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x33a85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a860: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x33a860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a864: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x33a864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a868: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x33a868u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a86c: 0xc0ce78a  jal         func_339E28
    ctx->pc = 0x33A86Cu;
    SET_GPR_U32(ctx, 31, 0x33A874u);
    ctx->pc = 0x33A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A86Cu;
    // 0x33a870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E28u, 0x33A86Cu, 0x33A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A874u;
label_33a874:
    // 0x33a874: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a878: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x33a878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33a87c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x33a87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33a880: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x33a880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33a884: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x33a884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33a888: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x33a888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33a88c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33a88cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33a890: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x33a890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a894: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x33a894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a898: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x33a898u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a89c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8A0u;
        // 0x33a8a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A8A8u;
}
