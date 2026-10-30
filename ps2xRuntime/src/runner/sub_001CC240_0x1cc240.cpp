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

// Function: sub_001CC240
// Address: 0x1cc240 - 0x1cc2f0
void sub_001CC240_0x1cc240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC240_0x1cc240");
#endif

    switch (ctx->pc) {
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        default: break;
    }

    ctx->pc = 0x1cc240u;

label_1cc240:
    // 0x1cc240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc244:
    // 0x1cc244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc248:
    // 0x1cc248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cc248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1cc24c:
    // 0x1cc24c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc250:
    // 0x1cc250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc254:
    // 0x1cc254: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1cc258:
    // 0x1cc258: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1cc25c:
    if (ctx->pc == 0x1CC25Cu) {
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC260u;
        goto label_1cc260;
    }
    ctx->pc = 0x1CC258u;
    {
        const bool branch_taken_0x1cc258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc258) {
            ctx->pc = 0x1CC2DCu;
            goto label_1cc2dc;
        }
    }
    ctx->pc = 0x1CC260u;
label_1cc260:
    // 0x1cc260: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x1cc260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1cc264:
    // 0x1cc264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cc264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cc268:
    // 0x1cc268: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1cc268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1cc26c:
    // 0x1cc26c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1cc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1cc270:
    // 0x1cc270: 0x60f809  jalr        $v1
label_1cc274:
    if (ctx->pc == 0x1CC274u) {
        ctx->pc = 0x1CC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC270u;
        // 0x1cc274: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC278u;
        goto label_1cc278;
    }
    ctx->pc = 0x1CC270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC278u);
        ctx->pc = 0x1CC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC270u;
        // 0x1cc274: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC270u, 0x1CC278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC278u;
label_1cc278:
    // 0x1cc278: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1cc278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1cc27c:
    // 0x1cc27c: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1cc280:
    // 0x1cc280: 0x26105880  addiu       $s0, $s0, 0x5880
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22656));
label_1cc284:
    // 0x1cc284: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1cc284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1cc288:
    // 0x1cc288: 0xc139fc8  jal         func_4E7F20
label_1cc28c:
    if (ctx->pc == 0x1CC28Cu) {
        ctx->pc = 0x1CC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC288u;
        // 0x1cc28c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC290u;
        goto label_1cc290;
    }
    ctx->pc = 0x1CC288u;
    SET_GPR_U32(ctx, 31, 0x1CC290u);
    ctx->pc = 0x1CC28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC288u;
    // 0x1cc28c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1CC288u, 0x1CC290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC290u;
label_1cc290:
    // 0x1cc290: 0xc073462  jal         func_1CD188
label_1cc294:
    if (ctx->pc == 0x1CC294u) {
        ctx->pc = 0x1CC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC290u;
        // 0x1cc294: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC298u;
        goto label_1cc298;
    }
    ctx->pc = 0x1CC290u;
    SET_GPR_U32(ctx, 31, 0x1CC298u);
    ctx->pc = 0x1CC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC290u;
    // 0x1cc294: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1CC290u, 0x1CC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC298u;
label_1cc298:
    // 0x1cc298: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1cc29c:
    // 0x1cc29c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc2a0:
    // 0x1cc2a0: 0xc139138  jal         func_4E44E0
label_1cc2a4:
    if (ctx->pc == 0x1CC2A4u) {
        ctx->pc = 0x1CC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2A0u;
        // 0x1cc2a4: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2A8u;
        goto label_1cc2a8;
    }
    ctx->pc = 0x1CC2A0u;
    SET_GPR_U32(ctx, 31, 0x1CC2A8u);
    ctx->pc = 0x1CC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2A0u;
    // 0x1cc2a4: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1CC2A0u, 0x1CC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2A8u;
label_1cc2a8:
    // 0x1cc2a8: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x1cc2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1cc2ac:
    // 0x1cc2ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cc2b0:
    // 0x1cc2b0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1cc2b4:
    // 0x1cc2b4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1cc2b8:
    // 0x1cc2b8: 0x60f809  jalr        $v1
label_1cc2bc:
    if (ctx->pc == 0x1CC2BCu) {
        ctx->pc = 0x1CC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2B8u;
        // 0x1cc2bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2C0u;
        goto label_1cc2c0;
    }
    ctx->pc = 0x1CC2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC2C0u);
        ctx->pc = 0x1CC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2B8u;
        // 0x1cc2bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC2B8u, 0x1CC2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC2C0u;
label_1cc2c0:
    // 0x1cc2c0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1cc2c4:
    // 0x1cc2c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc2c8:
    // 0x1cc2c8: 0xc139fe8  jal         func_4E7FA0
label_1cc2cc:
    if (ctx->pc == 0x1CC2CCu) {
        ctx->pc = 0x1CC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2C8u;
        // 0x1cc2cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2D0u;
        goto label_1cc2d0;
    }
    ctx->pc = 0x1CC2C8u;
    SET_GPR_U32(ctx, 31, 0x1CC2D0u);
    ctx->pc = 0x1CC2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2C8u;
    // 0x1cc2cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1CC2C8u, 0x1CC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2D0u;
label_1cc2d0:
    // 0x1cc2d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1cc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1cc2d4:
    // 0x1cc2d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1cc2d8:
    // 0x1cc2d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cc2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc2dc:
    // 0x1cc2dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc2e0:
    // 0x1cc2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc2e4:
    // 0x1cc2e4: 0x3e00008  jr          $ra
label_1cc2e8:
    if (ctx->pc == 0x1CC2E8u) {
        ctx->pc = 0x1CC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2E4u;
        // 0x1cc2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2ECu;
        goto label_1cc2ec;
    }
    ctx->pc = 0x1CC2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2E4u;
        // 0x1cc2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC2ECu;
label_1cc2ec:
    // 0x1cc2ec: 0x0  nop
    ctx->pc = 0x1cc2ecu;
    // NOP
    ctx->pc = 0x1cc2f0u;
}
