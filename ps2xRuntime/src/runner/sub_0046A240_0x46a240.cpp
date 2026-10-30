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

// Function: sub_0046A240
// Address: 0x46a240 - 0x46a2f8
void sub_0046A240_0x46a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A240_0x46a240");
#endif

    switch (ctx->pc) {
        case 0x46a240u: goto label_46a240;
        case 0x46a244u: goto label_46a244;
        case 0x46a248u: goto label_46a248;
        case 0x46a24cu: goto label_46a24c;
        case 0x46a250u: goto label_46a250;
        case 0x46a254u: goto label_46a254;
        case 0x46a258u: goto label_46a258;
        case 0x46a25cu: goto label_46a25c;
        case 0x46a260u: goto label_46a260;
        case 0x46a264u: goto label_46a264;
        case 0x46a268u: goto label_46a268;
        case 0x46a26cu: goto label_46a26c;
        case 0x46a270u: goto label_46a270;
        case 0x46a274u: goto label_46a274;
        case 0x46a278u: goto label_46a278;
        case 0x46a27cu: goto label_46a27c;
        case 0x46a280u: goto label_46a280;
        case 0x46a284u: goto label_46a284;
        case 0x46a288u: goto label_46a288;
        case 0x46a28cu: goto label_46a28c;
        case 0x46a290u: goto label_46a290;
        case 0x46a294u: goto label_46a294;
        case 0x46a298u: goto label_46a298;
        case 0x46a29cu: goto label_46a29c;
        case 0x46a2a0u: goto label_46a2a0;
        case 0x46a2a4u: goto label_46a2a4;
        case 0x46a2a8u: goto label_46a2a8;
        case 0x46a2acu: goto label_46a2ac;
        case 0x46a2b0u: goto label_46a2b0;
        case 0x46a2b4u: goto label_46a2b4;
        case 0x46a2b8u: goto label_46a2b8;
        case 0x46a2bcu: goto label_46a2bc;
        case 0x46a2c0u: goto label_46a2c0;
        case 0x46a2c4u: goto label_46a2c4;
        case 0x46a2c8u: goto label_46a2c8;
        case 0x46a2ccu: goto label_46a2cc;
        case 0x46a2d0u: goto label_46a2d0;
        case 0x46a2d4u: goto label_46a2d4;
        case 0x46a2d8u: goto label_46a2d8;
        case 0x46a2dcu: goto label_46a2dc;
        case 0x46a2e0u: goto label_46a2e0;
        case 0x46a2e4u: goto label_46a2e4;
        case 0x46a2e8u: goto label_46a2e8;
        case 0x46a2ecu: goto label_46a2ec;
        case 0x46a2f0u: goto label_46a2f0;
        case 0x46a2f4u: goto label_46a2f4;
        default: break;
    }

    ctx->pc = 0x46a240u;

label_46a240:
    // 0x46a240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_46a244:
    // 0x46a244: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x46a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
label_46a248:
    // 0x46a248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46a248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46a24c:
    // 0x46a24c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46a250:
    // 0x46a250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46a254:
    // 0x46a254: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x46a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46a258:
    // 0x46a258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46a258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46a25c:
    // 0x46a25c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46a260:
    // 0x46a260: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x46a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_46a264:
    // 0x46a264: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x46a264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_46a268:
    // 0x46a268: 0x40f809  jalr        $v0
label_46a26c:
    if (ctx->pc == 0x46A26Cu) {
        ctx->pc = 0x46A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A268u;
        // 0x46a26c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A270u;
        goto label_46a270;
    }
    ctx->pc = 0x46A268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46A270u);
        ctx->pc = 0x46A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A268u;
        // 0x46a26c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A268u, 0x46A270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46A270u;
label_46a270:
    // 0x46a270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46a270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46a274:
    // 0x46a274: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_46a278:
    if (ctx->pc == 0x46A278u) {
        ctx->pc = 0x46A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A274u;
        // 0x46a278: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A27Cu;
        goto label_46a27c;
    }
    ctx->pc = 0x46A274u;
    {
        const bool branch_taken_0x46a274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A274u;
        // 0x46a278: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a274) {
            ctx->pc = 0x46A2E0u;
            goto label_46a2e0;
        }
    }
    ctx->pc = 0x46A27Cu;
label_46a27c:
    // 0x46a27c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x46a27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_46a280:
    // 0x46a280: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x46a280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_46a284:
    // 0x46a284: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x46a284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_46a288:
    // 0x46a288: 0x2442aac0  addiu       $v0, $v0, -0x5540
    ctx->pc = 0x46a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945472));
label_46a28c:
    // 0x46a28c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46a290:
    // 0x46a290: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x46a290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_46a294:
    // 0x46a294: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46a298:
    // 0x46a298: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x46a298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_46a29c:
    // 0x46a29c: 0x2484e6c8  addiu       $a0, $a0, -0x1938
    ctx->pc = 0x46a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
label_46a2a0:
    // 0x46a2a0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x46a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_46a2a4:
    // 0x46a2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46a2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46a2a8:
    // 0x46a2a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x46a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_46a2ac:
    // 0x46a2ac: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x46a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_46a2b0:
    // 0x46a2b0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x46a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_46a2b4:
    // 0x46a2b4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x46a2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_46a2b8:
    // 0x46a2b8: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x46a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_46a2bc:
    // 0x46a2bc: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x46a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_46a2c0:
    // 0x46a2c0: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x46a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_46a2c4:
    // 0x46a2c4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x46a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_46a2c8:
    // 0x46a2c8: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x46a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_46a2cc:
    // 0x46a2cc: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x46a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_46a2d0:
    // 0x46a2d0: 0xc11ff8e  jal         func_47FE38
label_46a2d4:
    if (ctx->pc == 0x46A2D4u) {
        ctx->pc = 0x46A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A2D0u;
        // 0x46a2d4: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A2D8u;
        goto label_46a2d8;
    }
    ctx->pc = 0x46A2D0u;
    SET_GPR_U32(ctx, 31, 0x46A2D8u);
    ctx->pc = 0x46A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A2D0u;
    // 0x46a2d4: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x46A2D0u, 0x46A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A2D8u;
label_46a2d8:
    // 0x46a2d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_46a2dc:
    if (ctx->pc == 0x46A2DCu) {
        ctx->pc = 0x46A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A2D8u;
        // 0x46a2dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A2E0u;
        goto label_46a2e0;
    }
    ctx->pc = 0x46A2D8u;
    {
        const bool branch_taken_0x46a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A2D8u;
        // 0x46a2dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a2d8) {
            ctx->pc = 0x46A2E8u;
            goto label_46a2e8;
        }
    }
    ctx->pc = 0x46A2E0u;
label_46a2e0:
    // 0x46a2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46a2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46a2e4:
    // 0x46a2e4: 0x0  nop
    ctx->pc = 0x46a2e4u;
    // NOP
label_46a2e8:
    // 0x46a2e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46a2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a2ec:
    // 0x46a2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46a2f0:
    // 0x46a2f0: 0x3e00008  jr          $ra
label_46a2f4:
    if (ctx->pc == 0x46A2F4u) {
        ctx->pc = 0x46A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A2F0u;
        // 0x46a2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A2F8u;
        goto label_fallthrough_0x46a2f0;
    }
    ctx->pc = 0x46A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A2F0u;
        // 0x46a2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46a2f0:
    ctx->pc = 0x46A2F8u;
}
