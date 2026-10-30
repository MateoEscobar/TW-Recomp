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

// Function: sub_004211D8
// Address: 0x4211d8 - 0x421280
void sub_004211D8_0x4211d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004211D8_0x4211d8");
#endif

    switch (ctx->pc) {
        case 0x421204u: goto label_421204;
        case 0x421214u: goto label_421214;
        case 0x421224u: goto label_421224;
        case 0x421238u: goto label_421238;
        default: break;
    }

    ctx->pc = 0x4211d8u;

    // 0x4211d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4211d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4211dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4211dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4211e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4211e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4211e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4211e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4211e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4211e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4211ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4211ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4211f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4211f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4211f4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4211f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4211f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4211f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4211fc: 0xc1082d2  jal         func_420B48
    ctx->pc = 0x4211FCu;
    SET_GPR_U32(ctx, 31, 0x421204u);
    ctx->pc = 0x421200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4211FCu;
    // 0x421200: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B48u, 0x4211FCu, 0x421204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421204u;
label_421204:
    // 0x421204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x421204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x421208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42120c: 0xc1082ea  jal         func_420BA8
    ctx->pc = 0x42120Cu;
    SET_GPR_U32(ctx, 31, 0x421214u);
    ctx->pc = 0x421210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42120Cu;
    // 0x421210: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420BA8u, 0x42120Cu, 0x421214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421214u;
label_421214:
    // 0x421214: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x421214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x421218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42121c: 0xc108302  jal         func_420C08
    ctx->pc = 0x42121Cu;
    SET_GPR_U32(ctx, 31, 0x421224u);
    ctx->pc = 0x421220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42121Cu;
    // 0x421220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420C08u, 0x42121Cu, 0x421224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421224u;
label_421224:
    // 0x421224: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x421224u;
    {
        const bool branch_taken_0x421224 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x421228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421224u;
        // 0x421228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421224) {
            ctx->pc = 0x42125Cu;
            goto label_42125c;
        }
    }
    ctx->pc = 0x42122Cu;
    // 0x42122c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x42122cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x421230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421234: 0x0  nop
    ctx->pc = 0x421234u;
    // NOP
label_421238:
    // 0x421238: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x421238u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42123c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x42123cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x421240: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x421240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x421244: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x421244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x421248: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x421248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x42124c: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x42124cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x421250: 0x644018  mult        $t0, $v1, $a0
    ctx->pc = 0x421250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x421254: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x421254u;
    {
        const bool branch_taken_0x421254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421254u;
        // 0x421258: 0x1129021  addu        $s2, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421254) {
            ctx->pc = 0x421238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421238;
        }
    }
    ctx->pc = 0x42125Cu;
label_42125c:
    // 0x42125c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x42125cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421260: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x421260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x421264: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x421264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x421268: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x421268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42126c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x42126cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x421270: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x421270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x421274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x421278: 0x3e00008  jr          $ra
    ctx->pc = 0x421278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421278u;
        // 0x42127c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421280u;
}
