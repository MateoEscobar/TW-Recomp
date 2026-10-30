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

// Function: sub_004E9960
// Address: 0x4e9960 - 0x4e99e0
void sub_004E9960_0x4e9960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9960_0x4e9960");
#endif

    switch (ctx->pc) {
        case 0x4e9960u: goto label_4e9960;
        case 0x4e9964u: goto label_4e9964;
        case 0x4e9968u: goto label_4e9968;
        case 0x4e996cu: goto label_4e996c;
        case 0x4e9970u: goto label_4e9970;
        case 0x4e9974u: goto label_4e9974;
        case 0x4e9978u: goto label_4e9978;
        case 0x4e997cu: goto label_4e997c;
        case 0x4e9980u: goto label_4e9980;
        case 0x4e9984u: goto label_4e9984;
        case 0x4e9988u: goto label_4e9988;
        case 0x4e998cu: goto label_4e998c;
        case 0x4e9990u: goto label_4e9990;
        case 0x4e9994u: goto label_4e9994;
        case 0x4e9998u: goto label_4e9998;
        case 0x4e999cu: goto label_4e999c;
        case 0x4e99a0u: goto label_4e99a0;
        case 0x4e99a4u: goto label_4e99a4;
        case 0x4e99a8u: goto label_4e99a8;
        case 0x4e99acu: goto label_4e99ac;
        case 0x4e99b0u: goto label_4e99b0;
        case 0x4e99b4u: goto label_4e99b4;
        case 0x4e99b8u: goto label_4e99b8;
        case 0x4e99bcu: goto label_4e99bc;
        case 0x4e99c0u: goto label_4e99c0;
        case 0x4e99c4u: goto label_4e99c4;
        case 0x4e99c8u: goto label_4e99c8;
        case 0x4e99ccu: goto label_4e99cc;
        case 0x4e99d0u: goto label_4e99d0;
        case 0x4e99d4u: goto label_4e99d4;
        case 0x4e99d8u: goto label_4e99d8;
        case 0x4e99dcu: goto label_4e99dc;
        default: break;
    }

    ctx->pc = 0x4e9960u;

label_4e9960:
    // 0x4e9960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9964:
    // 0x4e9964: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9968:
    // 0x4e9968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e996c:
    // 0x4e996c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e996cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9970:
    // 0x4e9970: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9974:
    // 0x4e9974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9978:
    // 0x4e9978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e997c:
    // 0x4e997c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e9980:
    if (ctx->pc == 0x4E9980u) {
        ctx->pc = 0x4E9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E997Cu;
        // 0x4e9980: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9984u;
        goto label_4e9984;
    }
    ctx->pc = 0x4E997Cu;
    {
        const bool branch_taken_0x4e997c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E997Cu;
        // 0x4e9980: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e997c) {
            ctx->pc = 0x4E99C4u;
            goto label_4e99c4;
        }
    }
    ctx->pc = 0x4E9984u;
label_4e9984:
    // 0x4e9984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e9988:
    // 0x4e9988: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e9988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e998c:
    // 0x4e998c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e998cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e9990:
    // 0x4e9990: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e9990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e9994:
    // 0x4e9994: 0x60f809  jalr        $v1
label_4e9998:
    if (ctx->pc == 0x4E9998u) {
        ctx->pc = 0x4E9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9994u;
        // 0x4e9998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E999Cu;
        goto label_4e999c;
    }
    ctx->pc = 0x4E9994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E999Cu);
        ctx->pc = 0x4E9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9994u;
        // 0x4e9998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9994u, 0x4E999Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E999Cu;
label_4e999c:
    // 0x4e999c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e99a0:
    // 0x4e99a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e99a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e99a4:
    // 0x4e99a4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e99a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e99a8:
    // 0x4e99a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e99a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e99ac:
    // 0x4e99ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e99acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e99b0:
    // 0x4e99b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e99b4:
    // 0x4e99b4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e99b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e99b8:
    // 0x4e99b8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e99bc:
    // 0x4e99bc: 0x60f809  jalr        $v1
label_4e99c0:
    if (ctx->pc == 0x4E99C0u) {
        ctx->pc = 0x4E99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99BCu;
        // 0x4e99c0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E99C4u;
        goto label_4e99c4;
    }
    ctx->pc = 0x4E99BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E99C4u);
        ctx->pc = 0x4E99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99BCu;
        // 0x4e99c0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E99BCu, 0x4E99C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E99C4u;
label_4e99c4:
    // 0x4e99c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e99c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e99c8:
    // 0x4e99c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e99c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e99cc:
    // 0x4e99cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e99ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e99d0:
    // 0x4e99d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e99d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e99d4:
    // 0x4e99d4: 0x3e00008  jr          $ra
label_4e99d8:
    if (ctx->pc == 0x4E99D8u) {
        ctx->pc = 0x4E99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99D4u;
        // 0x4e99d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E99DCu;
        goto label_4e99dc;
    }
    ctx->pc = 0x4E99D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99D4u;
        // 0x4e99d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E99D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E99DCu;
label_4e99dc:
    // 0x4e99dc: 0x0  nop
    ctx->pc = 0x4e99dcu;
    // NOP
    ctx->pc = 0x4e99e0u;
}
