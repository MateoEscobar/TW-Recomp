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

// Function: sub_004F4920
// Address: 0x4f4920 - 0x4f49a0
void sub_004F4920_0x4f4920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4920_0x4f4920");
#endif

    switch (ctx->pc) {
        case 0x4f4920u: goto label_4f4920;
        case 0x4f4924u: goto label_4f4924;
        case 0x4f4928u: goto label_4f4928;
        case 0x4f492cu: goto label_4f492c;
        case 0x4f4930u: goto label_4f4930;
        case 0x4f4934u: goto label_4f4934;
        case 0x4f4938u: goto label_4f4938;
        case 0x4f493cu: goto label_4f493c;
        case 0x4f4940u: goto label_4f4940;
        case 0x4f4944u: goto label_4f4944;
        case 0x4f4948u: goto label_4f4948;
        case 0x4f494cu: goto label_4f494c;
        case 0x4f4950u: goto label_4f4950;
        case 0x4f4954u: goto label_4f4954;
        case 0x4f4958u: goto label_4f4958;
        case 0x4f495cu: goto label_4f495c;
        case 0x4f4960u: goto label_4f4960;
        case 0x4f4964u: goto label_4f4964;
        case 0x4f4968u: goto label_4f4968;
        case 0x4f496cu: goto label_4f496c;
        case 0x4f4970u: goto label_4f4970;
        case 0x4f4974u: goto label_4f4974;
        case 0x4f4978u: goto label_4f4978;
        case 0x4f497cu: goto label_4f497c;
        case 0x4f4980u: goto label_4f4980;
        case 0x4f4984u: goto label_4f4984;
        case 0x4f4988u: goto label_4f4988;
        case 0x4f498cu: goto label_4f498c;
        case 0x4f4990u: goto label_4f4990;
        case 0x4f4994u: goto label_4f4994;
        case 0x4f4998u: goto label_4f4998;
        case 0x4f499cu: goto label_4f499c;
        default: break;
    }

    ctx->pc = 0x4f4920u;

label_4f4920:
    // 0x4f4920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f4924:
    // 0x4f4924: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f4924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f4928:
    // 0x4f4928: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f492c:
    // 0x4f492c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f492cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4930:
    // 0x4f4930: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f4930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f4934:
    // 0x4f4934: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f4934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4938:
    // 0x4f4938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f493c:
    // 0x4f493c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f4940:
    if (ctx->pc == 0x4F4940u) {
        ctx->pc = 0x4F4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F493Cu;
        // 0x4f4940: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4944u;
        goto label_4f4944;
    }
    ctx->pc = 0x4F493Cu;
    {
        const bool branch_taken_0x4f493c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F493Cu;
        // 0x4f4940: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f493c) {
            ctx->pc = 0x4F4984u;
            goto label_4f4984;
        }
    }
    ctx->pc = 0x4F4944u;
label_4f4944:
    // 0x4f4944: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4948:
    // 0x4f4948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f4948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f494c:
    // 0x4f494c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f494cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f4950:
    // 0x4f4950: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f4954:
    // 0x4f4954: 0x60f809  jalr        $v1
label_4f4958:
    if (ctx->pc == 0x4F4958u) {
        ctx->pc = 0x4F4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4954u;
        // 0x4f4958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F495Cu;
        goto label_4f495c;
    }
    ctx->pc = 0x4F4954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F495Cu);
        ctx->pc = 0x4F4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4954u;
        // 0x4f4958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4954u, 0x4F495Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F495Cu;
label_4f495c:
    // 0x4f495c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f4960:
    // 0x4f4960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4964:
    // 0x4f4964: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f4964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f4968:
    // 0x4f4968: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f4968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f496c:
    // 0x4f496c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f496cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4970:
    // 0x4f4970: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4974:
    // 0x4f4974: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f4974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4978:
    // 0x4f4978: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f497c:
    // 0x4f497c: 0x60f809  jalr        $v1
label_4f4980:
    if (ctx->pc == 0x4F4980u) {
        ctx->pc = 0x4F4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F497Cu;
        // 0x4f4980: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4984u;
        goto label_4f4984;
    }
    ctx->pc = 0x4F497Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4984u);
        ctx->pc = 0x4F4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F497Cu;
        // 0x4f4980: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F497Cu, 0x4F4984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4984u;
label_4f4984:
    // 0x4f4984: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4988:
    // 0x4f4988: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f498c:
    // 0x4f498c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f498cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4990:
    // 0x4f4990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4994:
    // 0x4f4994: 0x3e00008  jr          $ra
label_4f4998:
    if (ctx->pc == 0x4F4998u) {
        ctx->pc = 0x4F4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4994u;
        // 0x4f4998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F499Cu;
        goto label_4f499c;
    }
    ctx->pc = 0x4F4994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4994u;
        // 0x4f4998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F499Cu;
label_4f499c:
    // 0x4f499c: 0x0  nop
    ctx->pc = 0x4f499cu;
    // NOP
    ctx->pc = 0x4f49a0u;
}
