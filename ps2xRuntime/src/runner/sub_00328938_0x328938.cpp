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

// Function: sub_00328938
// Address: 0x328938 - 0x3289b8
void sub_00328938_0x328938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328938_0x328938");
#endif

    switch (ctx->pc) {
        case 0x328938u: goto label_328938;
        case 0x32893cu: goto label_32893c;
        case 0x328940u: goto label_328940;
        case 0x328944u: goto label_328944;
        case 0x328948u: goto label_328948;
        case 0x32894cu: goto label_32894c;
        case 0x328950u: goto label_328950;
        case 0x328954u: goto label_328954;
        case 0x328958u: goto label_328958;
        case 0x32895cu: goto label_32895c;
        case 0x328960u: goto label_328960;
        case 0x328964u: goto label_328964;
        case 0x328968u: goto label_328968;
        case 0x32896cu: goto label_32896c;
        case 0x328970u: goto label_328970;
        case 0x328974u: goto label_328974;
        case 0x328978u: goto label_328978;
        case 0x32897cu: goto label_32897c;
        case 0x328980u: goto label_328980;
        case 0x328984u: goto label_328984;
        case 0x328988u: goto label_328988;
        case 0x32898cu: goto label_32898c;
        case 0x328990u: goto label_328990;
        case 0x328994u: goto label_328994;
        case 0x328998u: goto label_328998;
        case 0x32899cu: goto label_32899c;
        case 0x3289a0u: goto label_3289a0;
        case 0x3289a4u: goto label_3289a4;
        case 0x3289a8u: goto label_3289a8;
        case 0x3289acu: goto label_3289ac;
        case 0x3289b0u: goto label_3289b0;
        case 0x3289b4u: goto label_3289b4;
        default: break;
    }

    ctx->pc = 0x328938u;

label_328938:
    // 0x328938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x328938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32893c:
    // 0x32893c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_328940:
    // 0x328940: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x328940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_328944:
    // 0x328944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328948:
    // 0x328948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x328948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32894c:
    // 0x32894c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32894cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328950:
    // 0x328950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_328954:
    // 0x328954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x328954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_328958:
    // 0x328958: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x328958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_32895c:
    // 0x32895c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_328960:
    // 0x328960: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x328960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_328964:
    // 0x328964: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x328964u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328968:
    // 0x328968: 0x8e140010  lw          $s4, 0x10($s0)
    ctx->pc = 0x328968u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_32896c:
    // 0x32896c: 0xc0ca1dc  jal         func_328770
label_328970:
    if (ctx->pc == 0x328970u) {
        ctx->pc = 0x328970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32896Cu;
        // 0x328970: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328974u;
        goto label_328974;
    }
    ctx->pc = 0x32896Cu;
    SET_GPR_U32(ctx, 31, 0x328974u);
    ctx->pc = 0x328970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32896Cu;
    // 0x328970: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x32896Cu, 0x328974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328974u;
label_328974:
    // 0x328974: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x328974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_328978:
    // 0x328978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32897c:
    // 0x32897c: 0x240f809  jalr        $s2
label_328980:
    if (ctx->pc == 0x328980u) {
        ctx->pc = 0x328980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32897Cu;
        // 0x328980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328984u;
        goto label_328984;
    }
    ctx->pc = 0x32897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x328984u);
        ctx->pc = 0x328980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32897Cu;
        // 0x328980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32897Cu, 0x328984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328984u;
label_328984:
    // 0x328984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328988:
    // 0x328988: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x328988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_32898c:
    // 0x32898c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x32898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_328990:
    // 0x328990: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x328990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_328994:
    // 0x328994: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x328994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_328998:
    // 0x328998: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x328998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32899c:
    // 0x32899c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32899cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3289a0:
    // 0x3289a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3289a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3289a4:
    // 0x3289a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3289a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3289a8:
    // 0x3289a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3289a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3289ac:
    // 0x3289ac: 0x3e00008  jr          $ra
label_3289b0:
    if (ctx->pc == 0x3289B0u) {
        ctx->pc = 0x3289B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289ACu;
        // 0x3289b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289B4u;
        goto label_3289b4;
    }
    ctx->pc = 0x3289ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3289B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289ACu;
        // 0x3289b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3289ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3289B4u;
label_3289b4:
    // 0x3289b4: 0x0  nop
    ctx->pc = 0x3289b4u;
    // NOP
    ctx->pc = 0x3289b8u;
}
