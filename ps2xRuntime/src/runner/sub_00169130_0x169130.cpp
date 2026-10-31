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

// Function: sub_00169130
// Address: 0x169130 - 0x1691a0
void sub_00169130_0x169130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169130_0x169130");
#endif

    switch (ctx->pc) {
        case 0x169168u: goto label_169168;
        case 0x169184u: goto label_169184;
        default: break;
    }

    ctx->pc = 0x169130u;

    // 0x169130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169134: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x169134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x169138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x169138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16913c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16913cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169140: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x169140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x169144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16914c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16914cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169150: 0x86450030  lh          $a1, 0x30($s2)
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x169154: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x169154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x169158: 0xb02804  sllv        $a1, $s0, $a1
    ctx->pc = 0x169158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x16915c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x16915cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x169160: 0xc05a3cc  jal         func_168F30
    ctx->pc = 0x169160u;
    SET_GPR_U32(ctx, 31, 0x169168u);
    ctx->pc = 0x169164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169160u;
    // 0x169164: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F30u, 0x169160u, 0x169168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169168u;
label_169168:
    // 0x169168: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x169168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x16916c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169170: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x169170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x169174: 0x508004  sllv        $s0, $s0, $v0
    ctx->pc = 0x169174u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x169178: 0x108027  nor         $s0, $zero, $s0
    ctx->pc = 0x169178u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x16917c: 0xc05a3c2  jal         func_168F08
    ctx->pc = 0x16917Cu;
    SET_GPR_U32(ctx, 31, 0x169184u);
    ctx->pc = 0x169180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16917Cu;
    // 0x169180: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F08u, 0x16917Cu, 0x169184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169184u;
label_169184:
    // 0x169184: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x169184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x169188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16918c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16918cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169194: 0x3e00008  jr          $ra
    ctx->pc = 0x169194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169194u;
        // 0x169198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16919Cu;
    // 0x16919c: 0x0  nop
    ctx->pc = 0x16919cu;
    // NOP
    ctx->pc = 0x1691a0u;
}
