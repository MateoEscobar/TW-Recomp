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

// Function: sub_00238478
// Address: 0x238478 - 0x2384f8
void sub_00238478_0x238478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238478_0x238478");
#endif

    switch (ctx->pc) {
        case 0x238478u: goto label_238478;
        case 0x23847cu: goto label_23847c;
        case 0x238480u: goto label_238480;
        case 0x238484u: goto label_238484;
        case 0x238488u: goto label_238488;
        case 0x23848cu: goto label_23848c;
        case 0x238490u: goto label_238490;
        case 0x238494u: goto label_238494;
        case 0x238498u: goto label_238498;
        case 0x23849cu: goto label_23849c;
        case 0x2384a0u: goto label_2384a0;
        case 0x2384a4u: goto label_2384a4;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384acu: goto label_2384ac;
        case 0x2384b0u: goto label_2384b0;
        case 0x2384b4u: goto label_2384b4;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384bcu: goto label_2384bc;
        case 0x2384c0u: goto label_2384c0;
        case 0x2384c4u: goto label_2384c4;
        case 0x2384c8u: goto label_2384c8;
        case 0x2384ccu: goto label_2384cc;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384d4u: goto label_2384d4;
        case 0x2384d8u: goto label_2384d8;
        case 0x2384dcu: goto label_2384dc;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384e4u: goto label_2384e4;
        case 0x2384e8u: goto label_2384e8;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f0u: goto label_2384f0;
        case 0x2384f4u: goto label_2384f4;
        default: break;
    }

    ctx->pc = 0x238478u;

label_238478:
    // 0x238478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23847c:
    // 0x23847c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23847cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_238480:
    // 0x238480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_238484:
    // 0x238484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238488:
    // 0x238488: 0xc0e4060  jal         func_390180
label_23848c:
    if (ctx->pc == 0x23848Cu) {
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238488u;
        // 0x23848c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238490u;
        goto label_238490;
    }
    ctx->pc = 0x238488u;
    SET_GPR_U32(ctx, 31, 0x238490u);
    ctx->pc = 0x23848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238488u;
    // 0x23848c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238488u, 0x238490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238490u;
label_238490:
    // 0x238490: 0xc08a61a  jal         func_229868
label_238494:
    if (ctx->pc == 0x238494u) {
        ctx->pc = 0x238494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238490u;
        // 0x238494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238498u;
        goto label_238498;
    }
    ctx->pc = 0x238490u;
    SET_GPR_U32(ctx, 31, 0x238498u);
    ctx->pc = 0x238494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238490u;
    // 0x238494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238490u, 0x238498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238498u;
label_238498:
    // 0x238498: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_23849c:
    if (ctx->pc == 0x23849Cu) {
        ctx->pc = 0x23849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238498u;
        // 0x23849c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384A0u;
        goto label_2384a0;
    }
    ctx->pc = 0x238498u;
    {
        const bool branch_taken_0x238498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238498u;
        // 0x23849c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238498) {
            ctx->pc = 0x2384E8u;
            goto label_2384e8;
        }
    }
    ctx->pc = 0x2384A0u;
label_2384a0:
    // 0x2384a0: 0xc105bc2  jal         func_416F08
label_2384a4:
    if (ctx->pc == 0x2384A4u) {
        ctx->pc = 0x2384A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384A0u;
        // 0x2384a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384A8u;
        goto label_2384a8;
    }
    ctx->pc = 0x2384A0u;
    SET_GPR_U32(ctx, 31, 0x2384A8u);
    ctx->pc = 0x2384A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384A0u;
    // 0x2384a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x2384A0u, 0x2384A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384A8u;
label_2384a8:
    // 0x2384a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2384a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2384ac:
    // 0x2384ac: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_2384b0:
    if (ctx->pc == 0x2384B0u) {
        ctx->pc = 0x2384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384ACu;
        // 0x2384b0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384B4u;
        goto label_2384b4;
    }
    ctx->pc = 0x2384ACu;
    {
        const bool branch_taken_0x2384ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384ACu;
        // 0x2384b0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384ac) {
            ctx->pc = 0x2384E8u;
            goto label_2384e8;
        }
    }
    ctx->pc = 0x2384B4u;
label_2384b4:
    // 0x2384b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2384b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2384b8:
    // 0x2384b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2384b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2384bc:
    // 0x2384bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2384c0:
    // 0x2384c0: 0x40f809  jalr        $v0
label_2384c4:
    if (ctx->pc == 0x2384C4u) {
        ctx->pc = 0x2384C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C0u;
        // 0x2384c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384C8u;
        goto label_2384c8;
    }
    ctx->pc = 0x2384C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2384C8u);
        ctx->pc = 0x2384C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C0u;
        // 0x2384c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384C0u, 0x2384C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2384C8u;
label_2384c8:
    // 0x2384c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2384c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2384cc:
    // 0x2384cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2384ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2384d0:
    // 0x2384d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2384d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2384d4:
    // 0x2384d4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2384d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2384d8:
    // 0x2384d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2384d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2384dc:
    // 0x2384dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2384dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2384e0:
    // 0x2384e0: 0xc0b6a04  jal         func_2DA810
label_2384e4:
    if (ctx->pc == 0x2384E4u) {
        ctx->pc = 0x2384E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384E0u;
        // 0x2384e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384E8u;
        goto label_2384e8;
    }
    ctx->pc = 0x2384E0u;
    SET_GPR_U32(ctx, 31, 0x2384E8u);
    ctx->pc = 0x2384E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384E0u;
    // 0x2384e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2384E0u, 0x2384E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384E8u;
label_2384e8:
    // 0x2384e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2384e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2384ec:
    // 0x2384ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2384ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2384f0:
    // 0x2384f0: 0x3e00008  jr          $ra
label_2384f4:
    if (ctx->pc == 0x2384F4u) {
        ctx->pc = 0x2384F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384F0u;
        // 0x2384f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384F8u;
        goto label_fallthrough_0x2384f0;
    }
    ctx->pc = 0x2384F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2384F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384F0u;
        // 0x2384f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2384f0:
    ctx->pc = 0x2384F8u;
}
