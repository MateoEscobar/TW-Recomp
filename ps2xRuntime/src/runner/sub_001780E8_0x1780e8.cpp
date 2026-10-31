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

// Function: sub_001780E8
// Address: 0x1780e8 - 0x178178
void sub_001780E8_0x1780e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001780E8_0x1780e8");
#endif

    switch (ctx->pc) {
        case 0x178108u: goto label_178108;
        case 0x17811cu: goto label_17811c;
        case 0x178130u: goto label_178130;
        default: break;
    }

    ctx->pc = 0x1780e8u;

    // 0x1780e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1780ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1780ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1780f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1780f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1780f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1780f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1780f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1780fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1780fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178100: 0xc05e034  jal         func_1780D0
    ctx->pc = 0x178100u;
    SET_GPR_U32(ctx, 31, 0x178108u);
    ctx->pc = 0x178104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178100u;
    // 0x178104: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D0u, 0x178100u, 0x178108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178108u;
label_178108:
    // 0x178108: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17810c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17810cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178110: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178114: 0xc050fda  jal         func_143F68
    ctx->pc = 0x178114u;
    SET_GPR_U32(ctx, 31, 0x17811Cu);
    ctx->pc = 0x178118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178114u;
    // 0x178118: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x178114u, 0x17811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17811Cu;
label_17811c:
    // 0x17811c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17811cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178120: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x178120u;
    {
        const bool branch_taken_0x178120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x178124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178120u;
        // 0x178124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178120) {
            ctx->pc = 0x178150u;
            goto label_178150;
        }
    }
    ctx->pc = 0x178128u;
    // 0x178128: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x178128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x17812c: 0x0  nop
    ctx->pc = 0x17812cu;
    // NOP
label_178130:
    // 0x178130: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178134: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178134u;
    {
        const bool branch_taken_0x178134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x178134) {
            ctx->pc = 0x178138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178134u;
            // 0x178138: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178144u;
            goto label_178144;
        }
    }
    ctx->pc = 0x17813Cu;
    // 0x17813c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17813Cu;
    {
        const bool branch_taken_0x17813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17813Cu;
        // 0x178140: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17813c) {
            ctx->pc = 0x178154u;
            goto label_178154;
        }
    }
    ctx->pc = 0x178144u;
label_178144:
    // 0x178144: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x178144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x178148: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178148u;
    {
        const bool branch_taken_0x178148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178148u;
        // 0x17814c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178148) {
            ctx->pc = 0x178130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178130;
        }
    }
    ctx->pc = 0x178150u;
label_178150:
    // 0x178150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_178154:
    // 0x178154: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178158: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17815c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17815cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178164: 0x3e00008  jr          $ra
    ctx->pc = 0x178164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178164u;
        // 0x178168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17816Cu;
    // 0x17816c: 0x0  nop
    ctx->pc = 0x17816cu;
    // NOP
    // 0x178170: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178174: 0x0  nop
    ctx->pc = 0x178174u;
    // NOP
    ctx->pc = 0x178178u;
}
