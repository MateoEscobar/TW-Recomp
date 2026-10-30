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

// Function: sub_00262920
// Address: 0x262920 - 0x2629a8
void sub_00262920_0x262920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262920_0x262920");
#endif

    switch (ctx->pc) {
        case 0x262920u: goto label_262920;
        case 0x262924u: goto label_262924;
        case 0x262928u: goto label_262928;
        case 0x26292cu: goto label_26292c;
        case 0x262930u: goto label_262930;
        case 0x262934u: goto label_262934;
        case 0x262938u: goto label_262938;
        case 0x26293cu: goto label_26293c;
        case 0x262940u: goto label_262940;
        case 0x262944u: goto label_262944;
        case 0x262948u: goto label_262948;
        case 0x26294cu: goto label_26294c;
        case 0x262950u: goto label_262950;
        case 0x262954u: goto label_262954;
        case 0x262958u: goto label_262958;
        case 0x26295cu: goto label_26295c;
        case 0x262960u: goto label_262960;
        case 0x262964u: goto label_262964;
        case 0x262968u: goto label_262968;
        case 0x26296cu: goto label_26296c;
        case 0x262970u: goto label_262970;
        case 0x262974u: goto label_262974;
        case 0x262978u: goto label_262978;
        case 0x26297cu: goto label_26297c;
        case 0x262980u: goto label_262980;
        case 0x262984u: goto label_262984;
        case 0x262988u: goto label_262988;
        case 0x26298cu: goto label_26298c;
        case 0x262990u: goto label_262990;
        case 0x262994u: goto label_262994;
        case 0x262998u: goto label_262998;
        case 0x26299cu: goto label_26299c;
        case 0x2629a0u: goto label_2629a0;
        case 0x2629a4u: goto label_2629a4;
        default: break;
    }

    ctx->pc = 0x262920u;

label_262920:
    // 0x262920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_262924:
    // 0x262924: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x262924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_262928:
    // 0x262928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26292c:
    // 0x26292c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_262930:
    // 0x262930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_262934:
    // 0x262934: 0xc0e409a  jal         func_390268
label_262938:
    if (ctx->pc == 0x262938u) {
        ctx->pc = 0x262938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262934u;
        // 0x262938: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26293Cu;
        goto label_26293c;
    }
    ctx->pc = 0x262934u;
    SET_GPR_U32(ctx, 31, 0x26293Cu);
    ctx->pc = 0x262938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262934u;
    // 0x262938: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262934u, 0x26293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26293Cu;
label_26293c:
    // 0x26293c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x26293cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_262940:
    // 0x262940: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_262944:
    if (ctx->pc == 0x262944u) {
        ctx->pc = 0x262944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262940u;
        // 0x262944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262948u;
        goto label_262948;
    }
    ctx->pc = 0x262940u;
    {
        const bool branch_taken_0x262940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262940u;
        // 0x262944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262940) {
            ctx->pc = 0x262964u;
            goto label_262964;
        }
    }
    ctx->pc = 0x262948u;
label_262948:
    // 0x262948: 0xc05d484  jal         func_175210
label_26294c:
    if (ctx->pc == 0x26294Cu) {
        ctx->pc = 0x262950u;
        goto label_262950;
    }
    ctx->pc = 0x262948u;
    SET_GPR_U32(ctx, 31, 0x262950u);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262948u, 0x262950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262950u;
label_262950:
    // 0x262950: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262954:
    // 0x262954: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262958:
    // 0x262958: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26295c:
    // 0x26295c: 0xa0f809  jalr        $a1
label_262960:
    if (ctx->pc == 0x262960u) {
        ctx->pc = 0x262960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26295Cu;
        // 0x262960: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262964u;
        goto label_262964;
    }
    ctx->pc = 0x26295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262964u);
        ctx->pc = 0x262960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26295Cu;
        // 0x262960: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26295Cu, 0x262964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262964u;
label_262964:
    // 0x262964: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_262968:
    if (ctx->pc == 0x262968u) {
        ctx->pc = 0x262968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262964u;
        // 0x262968: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26296Cu;
        goto label_26296c;
    }
    ctx->pc = 0x262964u;
    {
        const bool branch_taken_0x262964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262964u;
        // 0x262968: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262964) {
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x26296Cu;
label_26296c:
    // 0x26296c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x26296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_262970:
    // 0x262970: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_262974:
    if (ctx->pc == 0x262974u) {
        ctx->pc = 0x262974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262970u;
        // 0x262974: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262978u;
        goto label_262978;
    }
    ctx->pc = 0x262970u;
    {
        const bool branch_taken_0x262970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262970u;
        // 0x262974: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262970) {
            ctx->pc = 0x26299Cu;
            goto label_26299c;
        }
    }
    ctx->pc = 0x262978u;
label_262978:
    // 0x262978: 0xc05d484  jal         func_175210
label_26297c:
    if (ctx->pc == 0x26297Cu) {
        ctx->pc = 0x262980u;
        goto label_262980;
    }
    ctx->pc = 0x262978u;
    SET_GPR_U32(ctx, 31, 0x262980u);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262978u, 0x262980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262980u;
label_262980:
    // 0x262980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262984:
    // 0x262984: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262988:
    // 0x262988: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26298c:
    // 0x26298c: 0xa0f809  jalr        $a1
label_262990:
    if (ctx->pc == 0x262990u) {
        ctx->pc = 0x262990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26298Cu;
        // 0x262990: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262994u;
        goto label_262994;
    }
    ctx->pc = 0x26298Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262994u);
        ctx->pc = 0x262990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26298Cu;
        // 0x262990: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26298Cu, 0x262994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262994u;
label_262994:
    // 0x262994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x262994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_262998:
    // 0x262998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26299c:
    // 0x26299c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26299cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2629a0:
    // 0x2629a0: 0x3e00008  jr          $ra
label_2629a4:
    if (ctx->pc == 0x2629A4u) {
        ctx->pc = 0x2629A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A0u;
        // 0x2629a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629A8u;
        goto label_fallthrough_0x2629a0;
    }
    ctx->pc = 0x2629A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2629A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A0u;
        // 0x2629a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2629A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2629a0:
    ctx->pc = 0x2629A8u;
}
