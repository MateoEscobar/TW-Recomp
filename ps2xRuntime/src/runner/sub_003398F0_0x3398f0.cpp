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

// Function: sub_003398F0
// Address: 0x3398f0 - 0x339988
void sub_003398F0_0x3398f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003398F0_0x3398f0");
#endif

    switch (ctx->pc) {
        case 0x3398f0u: goto label_3398f0;
        case 0x3398f4u: goto label_3398f4;
        case 0x3398f8u: goto label_3398f8;
        case 0x3398fcu: goto label_3398fc;
        case 0x339900u: goto label_339900;
        case 0x339904u: goto label_339904;
        case 0x339908u: goto label_339908;
        case 0x33990cu: goto label_33990c;
        case 0x339910u: goto label_339910;
        case 0x339914u: goto label_339914;
        case 0x339918u: goto label_339918;
        case 0x33991cu: goto label_33991c;
        case 0x339920u: goto label_339920;
        case 0x339924u: goto label_339924;
        case 0x339928u: goto label_339928;
        case 0x33992cu: goto label_33992c;
        case 0x339930u: goto label_339930;
        case 0x339934u: goto label_339934;
        case 0x339938u: goto label_339938;
        case 0x33993cu: goto label_33993c;
        case 0x339940u: goto label_339940;
        case 0x339944u: goto label_339944;
        case 0x339948u: goto label_339948;
        case 0x33994cu: goto label_33994c;
        case 0x339950u: goto label_339950;
        case 0x339954u: goto label_339954;
        case 0x339958u: goto label_339958;
        case 0x33995cu: goto label_33995c;
        case 0x339960u: goto label_339960;
        case 0x339964u: goto label_339964;
        case 0x339968u: goto label_339968;
        case 0x33996cu: goto label_33996c;
        case 0x339970u: goto label_339970;
        case 0x339974u: goto label_339974;
        case 0x339978u: goto label_339978;
        case 0x33997cu: goto label_33997c;
        case 0x339980u: goto label_339980;
        case 0x339984u: goto label_339984;
        default: break;
    }

    ctx->pc = 0x3398f0u;

label_3398f0:
    // 0x3398f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3398f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3398f4:
    // 0x3398f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3398f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3398f8:
    // 0x3398f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3398f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3398fc:
    // 0x3398fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3398fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_339900:
    // 0x339900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339904:
    // 0x339904: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x339904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_339908:
    // 0x339908: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33990c:
    if (ctx->pc == 0x33990Cu) {
        ctx->pc = 0x33990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339908u;
        // 0x33990c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339910u;
        goto label_339910;
    }
    ctx->pc = 0x339908u;
    {
        const bool branch_taken_0x339908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339908u;
        // 0x33990c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339908) {
            ctx->pc = 0x339970u;
            goto label_339970;
        }
    }
    ctx->pc = 0x339910u;
label_339910:
    // 0x339910: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x339910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_339914:
    // 0x339914: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x339914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_339918:
    // 0x339918: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x339918u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_33991c:
    // 0x33991c: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x33991cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_339920:
    // 0x339920: 0x24a56cc8  addiu       $a1, $a1, 0x6CC8
    ctx->pc = 0x339920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27848));
label_339924:
    // 0x339924: 0x25086d30  addiu       $t0, $t0, 0x6D30
    ctx->pc = 0x339924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27952));
label_339928:
    // 0x339928: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x339928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_33992c:
    // 0x33992c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x33992cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_339930:
    // 0x339930: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x339930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_339934:
    // 0x339934: 0x240901da  addiu       $t1, $zero, 0x1DA
    ctx->pc = 0x339934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
label_339938:
    // 0x339938: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x339938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33993c:
    // 0x33993c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33993cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339940:
    // 0x339940: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x339940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_339944:
    // 0x339944: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x339944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339948:
    // 0x339948: 0x40f809  jalr        $v0
label_33994c:
    if (ctx->pc == 0x33994Cu) {
        ctx->pc = 0x33994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339948u;
        // 0x33994c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339950u;
        goto label_339950;
    }
    ctx->pc = 0x339948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339950u);
        ctx->pc = 0x33994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339948u;
        // 0x33994c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339948u, 0x339950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339950u;
label_339950:
    // 0x339950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_339954:
    if (ctx->pc == 0x339954u) {
        ctx->pc = 0x339954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339950u;
        // 0x339954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339958u;
        goto label_339958;
    }
    ctx->pc = 0x339950u;
    {
        const bool branch_taken_0x339950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339950u;
        // 0x339954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339950) {
            ctx->pc = 0x33996Cu;
            goto label_33996c;
        }
    }
    ctx->pc = 0x339958u;
label_339958:
    // 0x339958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x339958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33995c:
    // 0x33995c: 0xc0ce9bc  jal         func_33A6F0
label_339960:
    if (ctx->pc == 0x339960u) {
        ctx->pc = 0x339960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33995Cu;
        // 0x339960: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339964u;
        goto label_339964;
    }
    ctx->pc = 0x33995Cu;
    SET_GPR_U32(ctx, 31, 0x339964u);
    ctx->pc = 0x339960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33995Cu;
    // 0x339960: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A6F0u, 0x33995Cu, 0x339964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339964u;
label_339964:
    // 0x339964: 0x10000002  b           . + 4 + (0x2 << 2)
label_339968:
    if (ctx->pc == 0x339968u) {
        ctx->pc = 0x339968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339964u;
        // 0x339968: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33996Cu;
        goto label_33996c;
    }
    ctx->pc = 0x339964u;
    {
        const bool branch_taken_0x339964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339964u;
        // 0x339968: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339964) {
            ctx->pc = 0x339970u;
            goto label_339970;
        }
    }
    ctx->pc = 0x33996Cu;
label_33996c:
    // 0x33996c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33996cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339970:
    // 0x339970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x339970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_339974:
    // 0x339974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339978:
    // 0x339978: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x339978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33997c:
    // 0x33997c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33997cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339980:
    // 0x339980: 0x3e00008  jr          $ra
label_339984:
    if (ctx->pc == 0x339984u) {
        ctx->pc = 0x339984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339980u;
        // 0x339984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339988u;
        goto label_fallthrough_0x339980;
    }
    ctx->pc = 0x339980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339980u;
        // 0x339984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339980:
    ctx->pc = 0x339988u;
}
