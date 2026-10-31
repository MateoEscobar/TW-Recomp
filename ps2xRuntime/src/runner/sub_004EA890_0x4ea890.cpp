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

// Function: sub_004EA890
// Address: 0x4ea890 - 0x4ea910
void sub_004EA890_0x4ea890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA890_0x4ea890");
#endif

    switch (ctx->pc) {
        case 0x4ea890u: goto label_4ea890;
        case 0x4ea894u: goto label_4ea894;
        case 0x4ea898u: goto label_4ea898;
        case 0x4ea89cu: goto label_4ea89c;
        case 0x4ea8a0u: goto label_4ea8a0;
        case 0x4ea8a4u: goto label_4ea8a4;
        case 0x4ea8a8u: goto label_4ea8a8;
        case 0x4ea8acu: goto label_4ea8ac;
        case 0x4ea8b0u: goto label_4ea8b0;
        case 0x4ea8b4u: goto label_4ea8b4;
        case 0x4ea8b8u: goto label_4ea8b8;
        case 0x4ea8bcu: goto label_4ea8bc;
        case 0x4ea8c0u: goto label_4ea8c0;
        case 0x4ea8c4u: goto label_4ea8c4;
        case 0x4ea8c8u: goto label_4ea8c8;
        case 0x4ea8ccu: goto label_4ea8cc;
        case 0x4ea8d0u: goto label_4ea8d0;
        case 0x4ea8d4u: goto label_4ea8d4;
        case 0x4ea8d8u: goto label_4ea8d8;
        case 0x4ea8dcu: goto label_4ea8dc;
        case 0x4ea8e0u: goto label_4ea8e0;
        case 0x4ea8e4u: goto label_4ea8e4;
        case 0x4ea8e8u: goto label_4ea8e8;
        case 0x4ea8ecu: goto label_4ea8ec;
        case 0x4ea8f0u: goto label_4ea8f0;
        case 0x4ea8f4u: goto label_4ea8f4;
        case 0x4ea8f8u: goto label_4ea8f8;
        case 0x4ea8fcu: goto label_4ea8fc;
        case 0x4ea900u: goto label_4ea900;
        case 0x4ea904u: goto label_4ea904;
        case 0x4ea908u: goto label_4ea908;
        case 0x4ea90cu: goto label_4ea90c;
        default: break;
    }

    ctx->pc = 0x4ea890u;

label_4ea890:
    // 0x4ea890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea894:
    // 0x4ea894: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea898:
    // 0x4ea898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea89c:
    // 0x4ea89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea8a0:
    // 0x4ea8a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea8a4:
    // 0x4ea8a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea8a8:
    // 0x4ea8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea8ac:
    // 0x4ea8ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea8b0:
    if (ctx->pc == 0x4EA8B0u) {
        ctx->pc = 0x4EA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8ACu;
        // 0x4ea8b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA8B4u;
        goto label_4ea8b4;
    }
    ctx->pc = 0x4EA8ACu;
    {
        const bool branch_taken_0x4ea8ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8ACu;
        // 0x4ea8b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea8ac) {
            ctx->pc = 0x4EA8F4u;
            goto label_4ea8f4;
        }
    }
    ctx->pc = 0x4EA8B4u;
label_4ea8b4:
    // 0x4ea8b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea8b8:
    // 0x4ea8b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea8bc:
    // 0x4ea8bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea8c0:
    // 0x4ea8c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea8c4:
    // 0x4ea8c4: 0x60f809  jalr        $v1
label_4ea8c8:
    if (ctx->pc == 0x4EA8C8u) {
        ctx->pc = 0x4EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8C4u;
        // 0x4ea8c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA8CCu;
        goto label_4ea8cc;
    }
    ctx->pc = 0x4EA8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA8CCu);
        ctx->pc = 0x4EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8C4u;
        // 0x4ea8c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA8C4u, 0x4EA8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA8CCu;
label_4ea8cc:
    // 0x4ea8cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea8d0:
    // 0x4ea8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea8d4:
    // 0x4ea8d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea8d8:
    // 0x4ea8d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea8dc:
    // 0x4ea8dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea8e0:
    // 0x4ea8e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea8e4:
    // 0x4ea8e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea8e8:
    // 0x4ea8e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea8ec:
    // 0x4ea8ec: 0x60f809  jalr        $v1
label_4ea8f0:
    if (ctx->pc == 0x4EA8F0u) {
        ctx->pc = 0x4EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8ECu;
        // 0x4ea8f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA8F4u;
        goto label_4ea8f4;
    }
    ctx->pc = 0x4EA8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA8F4u);
        ctx->pc = 0x4EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8ECu;
        // 0x4ea8f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA8ECu, 0x4EA8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA8F4u;
label_4ea8f4:
    // 0x4ea8f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea8f8:
    // 0x4ea8f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea8fc:
    // 0x4ea8fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea900:
    // 0x4ea900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea904:
    // 0x4ea904: 0x3e00008  jr          $ra
label_4ea908:
    if (ctx->pc == 0x4EA908u) {
        ctx->pc = 0x4EA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA904u;
        // 0x4ea908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA90Cu;
        goto label_4ea90c;
    }
    ctx->pc = 0x4EA904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA904u;
        // 0x4ea908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA90Cu;
label_4ea90c:
    // 0x4ea90c: 0x0  nop
    ctx->pc = 0x4ea90cu;
    // NOP
    ctx->pc = 0x4ea910u;
}
