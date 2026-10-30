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

// Function: sub_004EA990
// Address: 0x4ea990 - 0x4eaa10
void sub_004EA990_0x4ea990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA990_0x4ea990");
#endif

    switch (ctx->pc) {
        case 0x4ea990u: goto label_4ea990;
        case 0x4ea994u: goto label_4ea994;
        case 0x4ea998u: goto label_4ea998;
        case 0x4ea99cu: goto label_4ea99c;
        case 0x4ea9a0u: goto label_4ea9a0;
        case 0x4ea9a4u: goto label_4ea9a4;
        case 0x4ea9a8u: goto label_4ea9a8;
        case 0x4ea9acu: goto label_4ea9ac;
        case 0x4ea9b0u: goto label_4ea9b0;
        case 0x4ea9b4u: goto label_4ea9b4;
        case 0x4ea9b8u: goto label_4ea9b8;
        case 0x4ea9bcu: goto label_4ea9bc;
        case 0x4ea9c0u: goto label_4ea9c0;
        case 0x4ea9c4u: goto label_4ea9c4;
        case 0x4ea9c8u: goto label_4ea9c8;
        case 0x4ea9ccu: goto label_4ea9cc;
        case 0x4ea9d0u: goto label_4ea9d0;
        case 0x4ea9d4u: goto label_4ea9d4;
        case 0x4ea9d8u: goto label_4ea9d8;
        case 0x4ea9dcu: goto label_4ea9dc;
        case 0x4ea9e0u: goto label_4ea9e0;
        case 0x4ea9e4u: goto label_4ea9e4;
        case 0x4ea9e8u: goto label_4ea9e8;
        case 0x4ea9ecu: goto label_4ea9ec;
        case 0x4ea9f0u: goto label_4ea9f0;
        case 0x4ea9f4u: goto label_4ea9f4;
        case 0x4ea9f8u: goto label_4ea9f8;
        case 0x4ea9fcu: goto label_4ea9fc;
        case 0x4eaa00u: goto label_4eaa00;
        case 0x4eaa04u: goto label_4eaa04;
        case 0x4eaa08u: goto label_4eaa08;
        case 0x4eaa0cu: goto label_4eaa0c;
        default: break;
    }

    ctx->pc = 0x4ea990u;

label_4ea990:
    // 0x4ea990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea994:
    // 0x4ea994: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea998:
    // 0x4ea998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea99c:
    // 0x4ea99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea9a0:
    // 0x4ea9a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea9a4:
    // 0x4ea9a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea9a8:
    // 0x4ea9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea9ac:
    // 0x4ea9ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea9b0:
    if (ctx->pc == 0x4EA9B0u) {
        ctx->pc = 0x4EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA9ACu;
        // 0x4ea9b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA9B4u;
        goto label_4ea9b4;
    }
    ctx->pc = 0x4EA9ACu;
    {
        const bool branch_taken_0x4ea9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA9ACu;
        // 0x4ea9b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea9ac) {
            ctx->pc = 0x4EA9F4u;
            goto label_4ea9f4;
        }
    }
    ctx->pc = 0x4EA9B4u;
label_4ea9b4:
    // 0x4ea9b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea9b8:
    // 0x4ea9b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea9bc:
    // 0x4ea9bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea9c0:
    // 0x4ea9c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea9c4:
    // 0x4ea9c4: 0x60f809  jalr        $v1
label_4ea9c8:
    if (ctx->pc == 0x4EA9C8u) {
        ctx->pc = 0x4EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA9C4u;
        // 0x4ea9c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA9CCu;
        goto label_4ea9cc;
    }
    ctx->pc = 0x4EA9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA9CCu);
        ctx->pc = 0x4EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA9C4u;
        // 0x4ea9c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA9C4u, 0x4EA9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA9CCu;
label_4ea9cc:
    // 0x4ea9cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea9d0:
    // 0x4ea9d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea9d4:
    // 0x4ea9d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea9d8:
    // 0x4ea9d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea9dc:
    // 0x4ea9dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea9e0:
    // 0x4ea9e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea9e4:
    // 0x4ea9e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea9e8:
    // 0x4ea9e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea9ec:
    // 0x4ea9ec: 0x60f809  jalr        $v1
label_4ea9f0:
    if (ctx->pc == 0x4EA9F0u) {
        ctx->pc = 0x4EA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA9ECu;
        // 0x4ea9f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA9F4u;
        goto label_4ea9f4;
    }
    ctx->pc = 0x4EA9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA9F4u);
        ctx->pc = 0x4EA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA9ECu;
        // 0x4ea9f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA9ECu, 0x4EA9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA9F4u;
label_4ea9f4:
    // 0x4ea9f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea9f8:
    // 0x4ea9f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea9fc:
    // 0x4ea9fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eaa00:
    // 0x4eaa00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eaa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eaa04:
    // 0x4eaa04: 0x3e00008  jr          $ra
label_4eaa08:
    if (ctx->pc == 0x4EAA08u) {
        ctx->pc = 0x4EAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA04u;
        // 0x4eaa08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAA0Cu;
        goto label_4eaa0c;
    }
    ctx->pc = 0x4EAA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA04u;
        // 0x4eaa08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAA0Cu;
label_4eaa0c:
    // 0x4eaa0c: 0x0  nop
    ctx->pc = 0x4eaa0cu;
    // NOP
    ctx->pc = 0x4eaa10u;
}
