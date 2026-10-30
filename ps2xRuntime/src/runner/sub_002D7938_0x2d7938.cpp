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

// Function: sub_002D7938
// Address: 0x2d7938 - 0x2d79a8
void sub_002D7938_0x2d7938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7938_0x2d7938");
#endif

    switch (ctx->pc) {
        case 0x2d7938u: goto label_2d7938;
        case 0x2d793cu: goto label_2d793c;
        case 0x2d7940u: goto label_2d7940;
        case 0x2d7944u: goto label_2d7944;
        case 0x2d7948u: goto label_2d7948;
        case 0x2d794cu: goto label_2d794c;
        case 0x2d7950u: goto label_2d7950;
        case 0x2d7954u: goto label_2d7954;
        case 0x2d7958u: goto label_2d7958;
        case 0x2d795cu: goto label_2d795c;
        case 0x2d7960u: goto label_2d7960;
        case 0x2d7964u: goto label_2d7964;
        case 0x2d7968u: goto label_2d7968;
        case 0x2d796cu: goto label_2d796c;
        case 0x2d7970u: goto label_2d7970;
        case 0x2d7974u: goto label_2d7974;
        case 0x2d7978u: goto label_2d7978;
        case 0x2d797cu: goto label_2d797c;
        case 0x2d7980u: goto label_2d7980;
        case 0x2d7984u: goto label_2d7984;
        case 0x2d7988u: goto label_2d7988;
        case 0x2d798cu: goto label_2d798c;
        case 0x2d7990u: goto label_2d7990;
        case 0x2d7994u: goto label_2d7994;
        case 0x2d7998u: goto label_2d7998;
        case 0x2d799cu: goto label_2d799c;
        case 0x2d79a0u: goto label_2d79a0;
        case 0x2d79a4u: goto label_2d79a4;
        default: break;
    }

    ctx->pc = 0x2d7938u;

label_2d7938:
    // 0x2d7938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d793c:
    // 0x2d793c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d7940:
    // 0x2d7940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d7944:
    // 0x2d7944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7948:
    // 0x2d7948: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d794c:
    // 0x2d794c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2d794cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2d7950:
    // 0x2d7950: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2d7950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2d7954:
    // 0x2d7954: 0xa0f809  jalr        $a1
label_2d7958:
    if (ctx->pc == 0x2D7958u) {
        ctx->pc = 0x2D7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7954u;
        // 0x2d7958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D795Cu;
        goto label_2d795c;
    }
    ctx->pc = 0x2D7954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2D795Cu);
        ctx->pc = 0x2D7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7954u;
        // 0x2d7958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7954u, 0x2D795Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D795Cu;
label_2d795c:
    // 0x2d795c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7960:
    // 0x2d7960: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d7964:
    // 0x2d7964: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d7964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d7968:
    // 0x2d7968: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d796c:
    if (ctx->pc == 0x2D796Cu) {
        ctx->pc = 0x2D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7968u;
        // 0x2d796c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7970u;
        goto label_2d7970;
    }
    ctx->pc = 0x2D7968u;
    {
        const bool branch_taken_0x2d7968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7968u;
        // 0x2d796c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7968) {
            ctx->pc = 0x2D7998u;
            goto label_2d7998;
        }
    }
    ctx->pc = 0x2D7970u;
label_2d7970:
    // 0x2d7970: 0xc0b5ef2  jal         func_2D7BC8
label_2d7974:
    if (ctx->pc == 0x2D7974u) {
        ctx->pc = 0x2D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7970u;
        // 0x2d7974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7978u;
        goto label_2d7978;
    }
    ctx->pc = 0x2D7970u;
    SET_GPR_U32(ctx, 31, 0x2D7978u);
    ctx->pc = 0x2D7974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7970u;
    // 0x2d7974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BC8u, 0x2D7970u, 0x2D7978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7978u;
label_2d7978:
    // 0x2d7978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d797c:
    // 0x2d797c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7980:
    // 0x2d7980: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2d7980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2d7984:
    // 0x2d7984: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7988:
    // 0x2d7988: 0x9082028d  lbu         $v0, 0x28D($a0)
    ctx->pc = 0x2d7988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 653)));
label_2d798c:
    // 0x2d798c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d798cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d7990:
    // 0x2d7990: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x2d7990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
label_2d7994:
    // 0x2d7994: 0xa083028d  sb          $v1, 0x28D($a0)
    ctx->pc = 0x2d7994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 653), (uint8_t)GPR_U32(ctx, 3));
label_2d7998:
    // 0x2d7998: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d7998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d799c:
    // 0x2d799c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d799cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d79a0:
    // 0x2d79a0: 0x3e00008  jr          $ra
label_2d79a4:
    if (ctx->pc == 0x2D79A4u) {
        ctx->pc = 0x2D79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79A0u;
        // 0x2d79a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D79A8u;
        goto label_fallthrough_0x2d79a0;
    }
    ctx->pc = 0x2D79A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79A0u;
        // 0x2d79a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D79A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d79a0:
    ctx->pc = 0x2D79A8u;
}
