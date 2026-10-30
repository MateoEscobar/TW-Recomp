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

// Function: sub_001D7490
// Address: 0x1d7490 - 0x1d7648
void sub_001D7490_0x1d7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7490_0x1d7490");
#endif

    switch (ctx->pc) {
        case 0x1d7490u: goto label_1d7490;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d749cu: goto label_1d749c;
        case 0x1d74a0u: goto label_1d74a0;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74acu: goto label_1d74ac;
        case 0x1d74b0u: goto label_1d74b0;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74bcu: goto label_1d74bc;
        case 0x1d74c0u: goto label_1d74c0;
        case 0x1d74c4u: goto label_1d74c4;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74ccu: goto label_1d74cc;
        case 0x1d74d0u: goto label_1d74d0;
        case 0x1d74d4u: goto label_1d74d4;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74dcu: goto label_1d74dc;
        case 0x1d74e0u: goto label_1d74e0;
        case 0x1d74e4u: goto label_1d74e4;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74ecu: goto label_1d74ec;
        case 0x1d74f0u: goto label_1d74f0;
        case 0x1d74f4u: goto label_1d74f4;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d74fcu: goto label_1d74fc;
        case 0x1d7500u: goto label_1d7500;
        case 0x1d7504u: goto label_1d7504;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d750cu: goto label_1d750c;
        case 0x1d7510u: goto label_1d7510;
        case 0x1d7514u: goto label_1d7514;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d751cu: goto label_1d751c;
        case 0x1d7520u: goto label_1d7520;
        case 0x1d7524u: goto label_1d7524;
        case 0x1d7528u: goto label_1d7528;
        case 0x1d752cu: goto label_1d752c;
        case 0x1d7530u: goto label_1d7530;
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7538u: goto label_1d7538;
        case 0x1d753cu: goto label_1d753c;
        case 0x1d7540u: goto label_1d7540;
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7548u: goto label_1d7548;
        case 0x1d754cu: goto label_1d754c;
        case 0x1d7550u: goto label_1d7550;
        case 0x1d7554u: goto label_1d7554;
        case 0x1d7558u: goto label_1d7558;
        case 0x1d755cu: goto label_1d755c;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7564u: goto label_1d7564;
        case 0x1d7568u: goto label_1d7568;
        case 0x1d756cu: goto label_1d756c;
        case 0x1d7570u: goto label_1d7570;
        case 0x1d7574u: goto label_1d7574;
        case 0x1d7578u: goto label_1d7578;
        case 0x1d757cu: goto label_1d757c;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7584u: goto label_1d7584;
        case 0x1d7588u: goto label_1d7588;
        case 0x1d758cu: goto label_1d758c;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d7594u: goto label_1d7594;
        case 0x1d7598u: goto label_1d7598;
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a0u: goto label_1d75a0;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75b0u: goto label_1d75b0;
        case 0x1d75b4u: goto label_1d75b4;
        case 0x1d75b8u: goto label_1d75b8;
        case 0x1d75bcu: goto label_1d75bc;
        case 0x1d75c0u: goto label_1d75c0;
        case 0x1d75c4u: goto label_1d75c4;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75ccu: goto label_1d75cc;
        case 0x1d75d0u: goto label_1d75d0;
        case 0x1d75d4u: goto label_1d75d4;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75dcu: goto label_1d75dc;
        case 0x1d75e0u: goto label_1d75e0;
        case 0x1d75e4u: goto label_1d75e4;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75ecu: goto label_1d75ec;
        case 0x1d75f0u: goto label_1d75f0;
        case 0x1d75f4u: goto label_1d75f4;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d75fcu: goto label_1d75fc;
        case 0x1d7600u: goto label_1d7600;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7608u: goto label_1d7608;
        case 0x1d760cu: goto label_1d760c;
        case 0x1d7610u: goto label_1d7610;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7618u: goto label_1d7618;
        case 0x1d761cu: goto label_1d761c;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d7624u: goto label_1d7624;
        case 0x1d7628u: goto label_1d7628;
        case 0x1d762cu: goto label_1d762c;
        case 0x1d7630u: goto label_1d7630;
        case 0x1d7634u: goto label_1d7634;
        case 0x1d7638u: goto label_1d7638;
        case 0x1d763cu: goto label_1d763c;
        case 0x1d7640u: goto label_1d7640;
        case 0x1d7644u: goto label_1d7644;
        default: break;
    }

    ctx->pc = 0x1d7490u;

label_1d7490:
    // 0x1d7490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7494:
    // 0x1d7494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7498:
    // 0x1d7498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d749c:
    // 0x1d749c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d74a0:
    // 0x1d74a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d74a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d74a4:
    // 0x1d74a4: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
label_1d74a8:
    if (ctx->pc == 0x1D74A8u) {
        ctx->pc = 0x1D74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A4u;
        // 0x1d74a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74ACu;
        goto label_1d74ac;
    }
    ctx->pc = 0x1D74A4u;
    {
        const bool branch_taken_0x1d74a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A4u;
        // 0x1d74a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74a4) {
            ctx->pc = 0x1D7564u;
            goto label_1d7564;
        }
    }
    ctx->pc = 0x1D74ACu;
label_1d74ac:
    // 0x1d74ac: 0xc6210630  lwc1        $f1, 0x630($s1)
    ctx->pc = 0x1d74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d74b0:
    // 0x1d74b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d74b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d74b4:
    // 0x1d74b4: 0x0  nop
    ctx->pc = 0x1d74b4u;
    // NOP
label_1d74b8:
    // 0x1d74b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d74b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d74bc:
    // 0x1d74bc: 0x0  nop
    ctx->pc = 0x1d74bcu;
    // NOP
label_1d74c0:
    // 0x1d74c0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1d74c4:
    if (ctx->pc == 0x1D74C4u) {
        ctx->pc = 0x1D74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74C0u;
        // 0x1d74c4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74C8u;
        goto label_1d74c8;
    }
    ctx->pc = 0x1D74C0u;
    {
        const bool branch_taken_0x1d74c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74C0u;
        // 0x1d74c4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74c0) {
            ctx->pc = 0x1D7500u;
            goto label_1d7500;
        }
    }
    ctx->pc = 0x1D74C8u;
label_1d74c8:
    // 0x1d74c8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d74cc:
    // 0x1d74cc: 0xc04444c  jal         func_111130
label_1d74d0:
    if (ctx->pc == 0x1D74D0u) {
        ctx->pc = 0x1D74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74CCu;
        // 0x1d74d0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74D4u;
        goto label_1d74d4;
    }
    ctx->pc = 0x1D74CCu;
    SET_GPR_U32(ctx, 31, 0x1D74D4u);
    ctx->pc = 0x1D74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74CCu;
    // 0x1d74d0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D74CCu, 0x1D74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74D4u;
label_1d74d4:
    // 0x1d74d4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d74d8:
    // 0x1d74d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d74d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d74dc:
    // 0x1d74dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d74dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d74e0:
    // 0x1d74e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d74e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d74e4:
    // 0x1d74e4: 0xc043f36  jal         func_10FCD8
label_1d74e8:
    if (ctx->pc == 0x1D74E8u) {
        ctx->pc = 0x1D74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74E4u;
        // 0x1d74e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74ECu;
        goto label_1d74ec;
    }
    ctx->pc = 0x1D74E4u;
    SET_GPR_U32(ctx, 31, 0x1D74ECu);
    ctx->pc = 0x1D74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74E4u;
    // 0x1d74e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D74E4u, 0x1D74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74ECu;
label_1d74ec:
    // 0x1d74ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d74f0:
    // 0x1d74f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d74f4:
    // 0x1d74f4: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d74f8:
    // 0x1d74f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d74fc:
    if (ctx->pc == 0x1D74FCu) {
        ctx->pc = 0x1D74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74F8u;
        // 0x1d74fc: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7500u;
        goto label_1d7500;
    }
    ctx->pc = 0x1D74F8u;
    {
        const bool branch_taken_0x1d74f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74F8u;
        // 0x1d74fc: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74f8) {
            ctx->pc = 0x1D7530u;
            goto label_1d7530;
        }
    }
    ctx->pc = 0x1D7500u;
label_1d7500:
    // 0x1d7500: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d7500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7504:
    // 0x1d7504: 0xc04444c  jal         func_111130
label_1d7508:
    if (ctx->pc == 0x1D7508u) {
        ctx->pc = 0x1D7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7504u;
        // 0x1d7508: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D750Cu;
        goto label_1d750c;
    }
    ctx->pc = 0x1D7504u;
    SET_GPR_U32(ctx, 31, 0x1D750Cu);
    ctx->pc = 0x1D7508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7504u;
    // 0x1d7508: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D7504u, 0x1D750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D750Cu;
label_1d750c:
    // 0x1d750c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d7510:
    // 0x1d7510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7514:
    // 0x1d7514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7518:
    // 0x1d7518: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d751c:
    // 0x1d751c: 0xc043f36  jal         func_10FCD8
label_1d7520:
    if (ctx->pc == 0x1D7520u) {
        ctx->pc = 0x1D7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D751Cu;
        // 0x1d7520: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7524u;
        goto label_1d7524;
    }
    ctx->pc = 0x1D751Cu;
    SET_GPR_U32(ctx, 31, 0x1D7524u);
    ctx->pc = 0x1D7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D751Cu;
    // 0x1d7520: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D751Cu, 0x1D7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7524u;
label_1d7524:
    // 0x1d7524: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d7528:
    // 0x1d7528: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d752c:
    // 0x1d752c: 0xac4045cc  sw          $zero, 0x45CC($v0)
    ctx->pc = 0x1d752cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 0));
label_1d7530:
    // 0x1d7530: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x1d7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7534:
    // 0x1d7534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7538:
    // 0x1d7538: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d7538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1d753c:
    // 0x1d753c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d753cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d7540:
    // 0x1d7540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7544:
    // 0x1d7544: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d7544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d7548:
    // 0x1d7548: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d7548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d754c:
    // 0x1d754c: 0x8c64ecec  lw          $a0, -0x1314($v1)
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d7550:
    // 0x1d7550: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1d7550u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_1d7554:
    // 0x1d7554: 0xc076a8e  jal         func_1DAA38
label_1d7558:
    if (ctx->pc == 0x1D7558u) {
        ctx->pc = 0x1D7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7554u;
        // 0x1d7558: 0xe6200630  swc1        $f0, 0x630($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D755Cu;
        goto label_1d755c;
    }
    ctx->pc = 0x1D7554u;
    SET_GPR_U32(ctx, 31, 0x1D755Cu);
    ctx->pc = 0x1D7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7554u;
    // 0x1d7558: 0xe6200630  swc1        $f0, 0x630($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA38u, 0x1D7554u, 0x1D755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D755Cu;
label_1d755c:
    // 0x1d755c: 0x10000033  b           . + 4 + (0x33 << 2)
label_1d7560:
    if (ctx->pc == 0x1D7560u) {
        ctx->pc = 0x1D7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D755Cu;
        // 0x1d7560: 0x8e220638  lw          $v0, 0x638($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7564u;
        goto label_1d7564;
    }
    ctx->pc = 0x1D755Cu;
    {
        const bool branch_taken_0x1d755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D755Cu;
        // 0x1d7560: 0x8e220638  lw          $v0, 0x638($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d755c) {
            ctx->pc = 0x1D762Cu;
            goto label_1d762c;
        }
    }
    ctx->pc = 0x1D7564u;
label_1d7564:
    // 0x1d7564: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7568:
    // 0x1d7568: 0x14a20033  bne         $a1, $v0, . + 4 + (0x33 << 2)
label_1d756c:
    if (ctx->pc == 0x1D756Cu) {
        ctx->pc = 0x1D756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7568u;
        // 0x1d756c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7570u;
        goto label_1d7570;
    }
    ctx->pc = 0x1D7568u;
    {
        const bool branch_taken_0x1d7568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7568u;
        // 0x1d756c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7568) {
            ctx->pc = 0x1D7638u;
            goto label_1d7638;
        }
    }
    ctx->pc = 0x1D7570u;
label_1d7570:
    // 0x1d7570: 0xc6210630  lwc1        $f1, 0x630($s1)
    ctx->pc = 0x1d7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7574:
    // 0x1d7574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d7578:
    // 0x1d7578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d757c:
    // 0x1d757c: 0x0  nop
    ctx->pc = 0x1d757cu;
    // NOP
label_1d7580:
    // 0x1d7580: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d7580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7584:
    // 0x1d7584: 0x0  nop
    ctx->pc = 0x1d7584u;
    // NOP
label_1d7588:
    // 0x1d7588: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1d758c:
    if (ctx->pc == 0x1D758Cu) {
        ctx->pc = 0x1D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7588u;
        // 0x1d758c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7590u;
        goto label_1d7590;
    }
    ctx->pc = 0x1D7588u;
    {
        const bool branch_taken_0x1d7588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7588u;
        // 0x1d758c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7588) {
            ctx->pc = 0x1D75C8u;
            goto label_1d75c8;
        }
    }
    ctx->pc = 0x1D7590u;
label_1d7590:
    // 0x1d7590: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d7594:
    // 0x1d7594: 0xc04444c  jal         func_111130
label_1d7598:
    if (ctx->pc == 0x1D7598u) {
        ctx->pc = 0x1D7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7594u;
        // 0x1d7598: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D759Cu;
        goto label_1d759c;
    }
    ctx->pc = 0x1D7594u;
    SET_GPR_U32(ctx, 31, 0x1D759Cu);
    ctx->pc = 0x1D7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7594u;
    // 0x1d7598: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D7594u, 0x1D759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D759Cu;
label_1d759c:
    // 0x1d759c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d75a0:
    // 0x1d75a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d75a4:
    // 0x1d75a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d75a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75a8:
    // 0x1d75a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d75a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75ac:
    // 0x1d75ac: 0xc043f36  jal         func_10FCD8
label_1d75b0:
    if (ctx->pc == 0x1D75B0u) {
        ctx->pc = 0x1D75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75ACu;
        // 0x1d75b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75B4u;
        goto label_1d75b4;
    }
    ctx->pc = 0x1D75ACu;
    SET_GPR_U32(ctx, 31, 0x1D75B4u);
    ctx->pc = 0x1D75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75ACu;
    // 0x1d75b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D75ACu, 0x1D75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75B4u;
label_1d75b4:
    // 0x1d75b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d75b8:
    // 0x1d75b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d75b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d75bc:
    // 0x1d75bc: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d75c0:
    // 0x1d75c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d75c4:
    if (ctx->pc == 0x1D75C4u) {
        ctx->pc = 0x1D75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75C0u;
        // 0x1d75c4: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75C8u;
        goto label_1d75c8;
    }
    ctx->pc = 0x1D75C0u;
    {
        const bool branch_taken_0x1d75c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75C0u;
        // 0x1d75c4: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75c0) {
            ctx->pc = 0x1D75F8u;
            goto label_1d75f8;
        }
    }
    ctx->pc = 0x1D75C8u;
label_1d75c8:
    // 0x1d75c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d75c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d75cc:
    // 0x1d75cc: 0xc04444c  jal         func_111130
label_1d75d0:
    if (ctx->pc == 0x1D75D0u) {
        ctx->pc = 0x1D75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75CCu;
        // 0x1d75d0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75D4u;
        goto label_1d75d4;
    }
    ctx->pc = 0x1D75CCu;
    SET_GPR_U32(ctx, 31, 0x1D75D4u);
    ctx->pc = 0x1D75D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75CCu;
    // 0x1d75d0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D75CCu, 0x1D75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75D4u;
label_1d75d4:
    // 0x1d75d4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d75d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d75d8:
    // 0x1d75d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d75d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d75dc:
    // 0x1d75dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d75dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75e0:
    // 0x1d75e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75e4:
    // 0x1d75e4: 0xc043f36  jal         func_10FCD8
label_1d75e8:
    if (ctx->pc == 0x1D75E8u) {
        ctx->pc = 0x1D75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75E4u;
        // 0x1d75e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75ECu;
        goto label_1d75ec;
    }
    ctx->pc = 0x1D75E4u;
    SET_GPR_U32(ctx, 31, 0x1D75ECu);
    ctx->pc = 0x1D75E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75E4u;
    // 0x1d75e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D75E4u, 0x1D75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ECu;
label_1d75ec:
    // 0x1d75ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d75f0:
    // 0x1d75f0: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d75f4:
    // 0x1d75f4: 0xac4045cc  sw          $zero, 0x45CC($v0)
    ctx->pc = 0x1d75f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 0));
label_1d75f8:
    // 0x1d75f8: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x1d75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d75fc:
    // 0x1d75fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d75fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7600:
    // 0x1d7600: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d7600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1d7604:
    // 0x1d7604: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d7604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d7608:
    // 0x1d7608: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d760c:
    // 0x1d760c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d7610:
    // 0x1d7610: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d7610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d7614:
    // 0x1d7614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d7614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d7618:
    // 0x1d7618: 0x8c64ecec  lw          $a0, -0x1314($v1)
    ctx->pc = 0x1d7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d761c:
    // 0x1d761c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1d761cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_1d7620:
    // 0x1d7620: 0xc076a8e  jal         func_1DAA38
label_1d7624:
    if (ctx->pc == 0x1D7624u) {
        ctx->pc = 0x1D7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7620u;
        // 0x1d7624: 0xe6200630  swc1        $f0, 0x630($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7628u;
        goto label_1d7628;
    }
    ctx->pc = 0x1D7620u;
    SET_GPR_U32(ctx, 31, 0x1D7628u);
    ctx->pc = 0x1D7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7620u;
    // 0x1d7624: 0xe6200630  swc1        $f0, 0x630($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA38u, 0x1D7620u, 0x1D7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7628u;
label_1d7628:
    // 0x1d7628: 0x8e220638  lw          $v0, 0x638($s1)
    ctx->pc = 0x1d7628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
label_1d762c:
    // 0x1d762c: 0x40f809  jalr        $v0
label_1d7630:
    if (ctx->pc == 0x1D7630u) {
        ctx->pc = 0x1D7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D762Cu;
        // 0x1d7630: 0xc62c0630  lwc1        $f12, 0x630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7634u;
        goto label_1d7634;
    }
    ctx->pc = 0x1D762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7634u);
        ctx->pc = 0x1D7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D762Cu;
        // 0x1d7630: 0xc62c0630  lwc1        $f12, 0x630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D762Cu, 0x1D7634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7634u;
label_1d7634:
    // 0x1d7634: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d7634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7638:
    // 0x1d7638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d763c:
    // 0x1d763c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d763cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7640:
    // 0x1d7640: 0x3e00008  jr          $ra
label_1d7644:
    if (ctx->pc == 0x1D7644u) {
        ctx->pc = 0x1D7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7640u;
        // 0x1d7644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7648u;
        goto label_fallthrough_0x1d7640;
    }
    ctx->pc = 0x1D7640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7640u;
        // 0x1d7644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7640:
    ctx->pc = 0x1D7648u;
}
