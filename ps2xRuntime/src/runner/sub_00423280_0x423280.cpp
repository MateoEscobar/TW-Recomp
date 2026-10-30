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

// Function: sub_00423280
// Address: 0x423280 - 0x423300
void sub_00423280_0x423280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423280_0x423280");
#endif

    switch (ctx->pc) {
        case 0x423280u: goto label_423280;
        case 0x423284u: goto label_423284;
        case 0x423288u: goto label_423288;
        case 0x42328cu: goto label_42328c;
        case 0x423290u: goto label_423290;
        case 0x423294u: goto label_423294;
        case 0x423298u: goto label_423298;
        case 0x42329cu: goto label_42329c;
        case 0x4232a0u: goto label_4232a0;
        case 0x4232a4u: goto label_4232a4;
        case 0x4232a8u: goto label_4232a8;
        case 0x4232acu: goto label_4232ac;
        case 0x4232b0u: goto label_4232b0;
        case 0x4232b4u: goto label_4232b4;
        case 0x4232b8u: goto label_4232b8;
        case 0x4232bcu: goto label_4232bc;
        case 0x4232c0u: goto label_4232c0;
        case 0x4232c4u: goto label_4232c4;
        case 0x4232c8u: goto label_4232c8;
        case 0x4232ccu: goto label_4232cc;
        case 0x4232d0u: goto label_4232d0;
        case 0x4232d4u: goto label_4232d4;
        case 0x4232d8u: goto label_4232d8;
        case 0x4232dcu: goto label_4232dc;
        case 0x4232e0u: goto label_4232e0;
        case 0x4232e4u: goto label_4232e4;
        case 0x4232e8u: goto label_4232e8;
        case 0x4232ecu: goto label_4232ec;
        case 0x4232f0u: goto label_4232f0;
        case 0x4232f4u: goto label_4232f4;
        case 0x4232f8u: goto label_4232f8;
        case 0x4232fcu: goto label_4232fc;
        default: break;
    }

    ctx->pc = 0x423280u;

label_423280:
    // 0x423280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x423280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_423284:
    // 0x423284: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x423284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_423288:
    // 0x423288: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x423288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_42328c:
    // 0x42328c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42328cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423290:
    // 0x423290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_423294:
    // 0x423294: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x423294u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
label_423298:
    // 0x423298: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x423298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_42329c:
    // 0x42329c: 0x2652e790  addiu       $s2, $s2, -0x1870
    ctx->pc = 0x42329cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961040));
label_4232a0:
    // 0x4232a0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x4232a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4232a4:
    // 0x4232a4: 0x86020050  lh          $v0, 0x50($s0)
    ctx->pc = 0x4232a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_4232a8:
    // 0x4232a8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x4232a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4232ac:
    // 0x4232ac: 0xc108cc0  jal         func_423300
label_4232b0:
    if (ctx->pc == 0x4232B0u) {
        ctx->pc = 0x4232B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4232ACu;
        // 0x4232b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4232B4u;
        goto label_4232b4;
    }
    ctx->pc = 0x4232ACu;
    SET_GPR_U32(ctx, 31, 0x4232B4u);
    ctx->pc = 0x4232B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4232ACu;
    // 0x4232b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423300u, 0x4232ACu, 0x4232B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4232B4u;
label_4232b4:
    // 0x4232b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4232b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4232b8:
    // 0x4232b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4232b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4232bc:
    // 0x4232bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4232bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4232c0:
    // 0x4232c0: 0x60f809  jalr        $v1
label_4232c4:
    if (ctx->pc == 0x4232C4u) {
        ctx->pc = 0x4232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4232C0u;
        // 0x4232c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4232C8u;
        goto label_4232c8;
    }
    ctx->pc = 0x4232C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4232C8u);
        ctx->pc = 0x4232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4232C0u;
        // 0x4232c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4232C0u, 0x4232C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4232C8u;
label_4232c8:
    // 0x4232c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4232c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4232cc:
    // 0x4232cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4232ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4232d0:
    // 0x4232d0: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x4232d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_4232d4:
    // 0x4232d4: 0x0  nop
    ctx->pc = 0x4232d4u;
    // NOP
label_4232d8:
    // 0x4232d8: 0x0  nop
    ctx->pc = 0x4232d8u;
    // NOP
label_4232dc:
    // 0x4232dc: 0x0  nop
    ctx->pc = 0x4232dcu;
    // NOP
label_4232e0:
    // 0x4232e0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_4232e4:
    if (ctx->pc == 0x4232E4u) {
        ctx->pc = 0x4232E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4232E0u;
        // 0x4232e4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4232E8u;
        goto label_4232e8;
    }
    ctx->pc = 0x4232E0u;
    {
        const bool branch_taken_0x4232e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4232e0) {
            ctx->pc = 0x4232E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4232E0u;
            // 0x4232e4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4232D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4232d0;
        }
    }
    ctx->pc = 0x4232E8u;
label_4232e8:
    // 0x4232e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4232e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4232ec:
    // 0x4232ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4232ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4232f0:
    // 0x4232f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4232f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4232f4:
    // 0x4232f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4232f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4232f8:
    // 0x4232f8: 0x3e00008  jr          $ra
label_4232fc:
    if (ctx->pc == 0x4232FCu) {
        ctx->pc = 0x4232FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4232F8u;
        // 0x4232fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423300u;
        goto label_fallthrough_0x4232f8;
    }
    ctx->pc = 0x4232F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4232FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4232F8u;
        // 0x4232fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4232F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4232f8:
    ctx->pc = 0x423300u;
}
