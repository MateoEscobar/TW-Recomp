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

// Function: sub_002B7258
// Address: 0x2b7258 - 0x2b75b8
void sub_002B7258_0x2b7258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7258_0x2b7258");
#endif

    switch (ctx->pc) {
        case 0x2b72a8u: goto label_2b72a8;
        case 0x2b72b8u: goto label_2b72b8;
        case 0x2b72e8u: goto label_2b72e8;
        case 0x2b72fcu: goto label_2b72fc;
        case 0x2b730cu: goto label_2b730c;
        case 0x2b7318u: goto label_2b7318;
        case 0x2b733cu: goto label_2b733c;
        case 0x2b735cu: goto label_2b735c;
        case 0x2b7368u: goto label_2b7368;
        case 0x2b736cu: goto label_2b736c;
        case 0x2b7380u: goto label_2b7380;
        case 0x2b7388u: goto label_2b7388;
        case 0x2b73b4u: goto label_2b73b4;
        case 0x2b7410u: goto label_2b7410;
        case 0x2b743cu: goto label_2b743c;
        case 0x2b7444u: goto label_2b7444;
        case 0x2b7478u: goto label_2b7478;
        case 0x2b7494u: goto label_2b7494;
        case 0x2b749cu: goto label_2b749c;
        case 0x2b74acu: goto label_2b74ac;
        case 0x2b74b8u: goto label_2b74b8;
        case 0x2b74e0u: goto label_2b74e0;
        case 0x2b74f4u: goto label_2b74f4;
        case 0x2b750cu: goto label_2b750c;
        case 0x2b754cu: goto label_2b754c;
        case 0x2b756cu: goto label_2b756c;
        case 0x2b7580u: goto label_2b7580;
        default: break;
    }

    ctx->pc = 0x2b7258u;

    // 0x2b7258: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b7258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b725c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2b7260: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2b7264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b7264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7268: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2b726c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b726cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7270: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2b7274: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2b7278: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b727c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2b7280: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b7280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b7284: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b7284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b7288: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b7288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b728c: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b728cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2b7290: 0x1c4000bc  bgtz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2B7290u;
    {
        const bool branch_taken_0x2b7290 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7290u;
        // 0x2b7294: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7290) {
            ctx->pc = 0x2B7584u;
            goto label_2b7584;
        }
    }
    ctx->pc = 0x2B7298u;
    // 0x2b7298: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2b7298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2b729c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72a0: 0xc089998  jal         func_226660
    ctx->pc = 0x2B72A0u;
    SET_GPR_U32(ctx, 31, 0x2B72A8u);
    ctx->pc = 0x2B72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72A0u;
    // 0x2b72a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B72A0u, 0x2B72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72A8u;
label_2b72a8:
    // 0x2b72a8: 0x105200b7  beq         $v0, $s2, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2B72A8u;
    {
        const bool branch_taken_0x2b72a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72A8u;
        // 0x2b72ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72a8) {
            ctx->pc = 0x2B7588u;
            goto label_2b7588;
        }
    }
    ctx->pc = 0x2B72B0u;
    // 0x2b72b0: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2B72B0u;
    SET_GPR_U32(ctx, 31, 0x2B72B8u);
    ctx->pc = 0x2B72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72B0u;
    // 0x2b72b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B72B0u, 0x2B72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72B8u;
label_2b72b8:
    // 0x2b72b8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2b72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b72bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b72bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b72c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B72C0u;
    {
        const bool branch_taken_0x2b72c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72c0) {
            ctx->pc = 0x2B72C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B72C0u;
            // 0x2b72c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B72C8u;
            goto label_2b72c8;
        }
    }
    ctx->pc = 0x2B72C8u;
label_2b72c8:
    // 0x2b72c8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2b72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2b72cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2b72ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2b72d0: 0x2010  mfhi        $a0
    ctx->pc = 0x2b72d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2b72d4: 0x2c940001  sltiu       $s4, $a0, 0x1
    ctx->pc = 0x2b72d4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b72d8: 0x56920004  bnel        $s4, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B72D8u;
    {
        const bool branch_taken_0x2b72d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b72d8) {
            ctx->pc = 0x2B72DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B72D8u;
            // 0x2b72dc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B72ECu;
            goto label_2b72ec;
        }
    }
    ctx->pc = 0x2B72E0u;
    // 0x2b72e0: 0xc0adc76  jal         func_2B71D8
    ctx->pc = 0x2B72E0u;
    SET_GPR_U32(ctx, 31, 0x2B72E8u);
    ctx->pc = 0x2B72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72E0u;
    // 0x2b72e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B71D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B71D8u, 0x2B72E0u, 0x2B72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72E8u;
label_2b72e8:
    // 0x2b72e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b72ec:
    // 0x2b72ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b72f0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b72f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b72f4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B72F4u;
    SET_GPR_U32(ctx, 31, 0x2B72FCu);
    ctx->pc = 0x2B72F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72F4u;
    // 0x2b72f8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B72F4u, 0x2B72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72FCu;
label_2b72fc:
    // 0x2b72fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b72fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7304: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2B7304u;
    SET_GPR_U32(ctx, 31, 0x2B730Cu);
    ctx->pc = 0x2B7308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7304u;
    // 0x2b7308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B7304u, 0x2B730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B730Cu;
label_2b730c:
    // 0x2b730c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b730cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7310: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2B7310u;
    SET_GPR_U32(ctx, 31, 0x2B7318u);
    ctx->pc = 0x2B7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7310u;
    // 0x2b7314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2B7310u, 0x2B7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7318u;
label_2b7318:
    // 0x2b7318: 0x14520026  bne         $v0, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B7318u;
    {
        const bool branch_taken_0x2b7318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b7318) {
            ctx->pc = 0x2B73B4u;
            goto label_2b73b4;
        }
    }
    ctx->pc = 0x2B7320u;
    // 0x2b7320: 0x16820024  bne         $s4, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B7320u;
    {
        const bool branch_taken_0x2b7320 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7320u;
        // 0x2b7324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7320) {
            ctx->pc = 0x2B73B4u;
            goto label_2b73b4;
        }
    }
    ctx->pc = 0x2B7328u;
    // 0x2b7328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b7328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b732c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b732cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7330: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2b7330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2b7334: 0xc059856  jal         func_166158
    ctx->pc = 0x2B7334u;
    SET_GPR_U32(ctx, 31, 0x2B733Cu);
    ctx->pc = 0x2B7338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7334u;
    // 0x2b7338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x2B7334u, 0x2B733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B733Cu;
label_2b733c:
    // 0x2b733c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b733cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7340: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x2b7340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b7344: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B7344u;
    {
        const bool branch_taken_0x2b7344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7344u;
        // 0x2b7348: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7344) {
            ctx->pc = 0x2B73B4u;
            goto label_2b73b4;
        }
    }
    ctx->pc = 0x2B734Cu;
    // 0x2b734c: 0x26150048  addiu       $s5, $s0, 0x48
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2b7350: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b7350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b7354: 0xc0cd526  jal         func_335498
    ctx->pc = 0x2B7354u;
    SET_GPR_U32(ctx, 31, 0x2B735Cu);
    ctx->pc = 0x2B7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7354u;
    // 0x2b7358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2B7354u, 0x2B735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B735Cu;
label_2b735c:
    // 0x2b735c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B735Cu;
    {
        const bool branch_taken_0x2b735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B735Cu;
        // 0x2b7360: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b735c) {
            ctx->pc = 0x2B736Cu;
            goto label_2b736c;
        }
    }
    ctx->pc = 0x2B7364u;
    // 0x2b7364: 0x0  nop
    ctx->pc = 0x2b7364u;
    // NOP
label_2b7368:
    // 0x2b7368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b7368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b736c:
    // 0x2b736c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2b736cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b7370: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7370u;
    {
        const bool branch_taken_0x2b7370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7370u;
        // 0x2b7374: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7370) {
            ctx->pc = 0x2B73B4u;
            goto label_2b73b4;
        }
    }
    ctx->pc = 0x2B7378u;
    // 0x2b7378: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2B7378u;
    SET_GPR_U32(ctx, 31, 0x2B7380u);
    ctx->pc = 0x2B737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7378u;
    // 0x2b737c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2B7378u, 0x2B7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7380u;
label_2b7380:
    // 0x2b7380: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B7380u;
    SET_GPR_U32(ctx, 31, 0x2B7388u);
    ctx->pc = 0x2B7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7380u;
    // 0x2b7384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B7380u, 0x2B7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7388u;
label_2b7388:
    // 0x2b7388: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B7388u;
    {
        const bool branch_taken_0x2b7388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7388) {
            ctx->pc = 0x2B738Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7388u;
            // 0x2b738c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B736Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b736c;
        }
    }
    ctx->pc = 0x2B7390u;
    // 0x2b7390: 0x1654fff5  bne         $s2, $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B7390u;
    {
        const bool branch_taken_0x2b7390 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7390u;
        // 0x2b7394: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7390) {
            ctx->pc = 0x2B7368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7368;
        }
    }
    ctx->pc = 0x2B7398u;
    // 0x2b7398: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b7398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b739c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b739cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b73a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b73a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73a4: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2b73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    // 0x2b73a8: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2b73a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2b73ac: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2B73ACu;
    SET_GPR_U32(ctx, 31, 0x2B73B4u);
    ctx->pc = 0x2B73B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73ACu;
    // 0x2b73b0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2B73ACu, 0x2B73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73B4u;
label_2b73b4:
    // 0x2b73b4: 0x12c00057  beqz        $s6, . + 4 + (0x57 << 2)
    ctx->pc = 0x2B73B4u;
    {
        const bool branch_taken_0x2b73b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73B4u;
        // 0x2b73b8: 0x26740090  addiu       $s4, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73b4) {
            ctx->pc = 0x2B7514u;
            goto label_2b7514;
        }
    }
    ctx->pc = 0x2B73BCu;
    // 0x2b73bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2b73c0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2b73c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2b73c4: 0x24704b00  addiu       $s0, $v1, 0x4B00
    ctx->pc = 0x2b73c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2b73c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b73c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b73cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2b73ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b73d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b73d4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2b73d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x2b73d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b73d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b73dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b73e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b73e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b73e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b73e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b73e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73ec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2b73ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2b73f0: 0x86c20092  lh          $v0, 0x92($s6)
    ctx->pc = 0x2b73f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
    // 0x2b73f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b73f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b73fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b73fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7400: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2b7400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2b7404: 0xc4c00140  lwc1        $f0, 0x140($a2)
    ctx->pc = 0x2b7404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7408: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B7408u;
    SET_GPR_U32(ctx, 31, 0x2B7410u);
    ctx->pc = 0x2B740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7408u;
    // 0x2b740c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B7408u, 0x2B7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7410u;
label_2b7410:
    // 0x2b7410: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2b7410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b7414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b7414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7418: 0x0  nop
    ctx->pc = 0x2b7418u;
    // NOP
    // 0x2b741c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2B741Cu;
    {
        const bool branch_taken_0x2b741c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B741Cu;
        // 0x2b7420: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b741c) {
            ctx->pc = 0x2B7480u;
            goto label_2b7480;
        }
    }
    ctx->pc = 0x2B7424u;
    // 0x2b7424: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b7424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b7428: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b7428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b742c: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2b742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    // 0x2b7430: 0x240609c4  addiu       $a2, $zero, 0x9C4
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x2b7434: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2B7434u;
    SET_GPR_U32(ctx, 31, 0x2B743Cu);
    ctx->pc = 0x2B7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7434u;
    // 0x2b7438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2B7434u, 0x2B743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B743Cu;
label_2b743c:
    // 0x2b743c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B743Cu;
    SET_GPR_U32(ctx, 31, 0x2B7444u);
    ctx->pc = 0x2B7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B743Cu;
    // 0x2b7440: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B743Cu, 0x2B7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7444u;
label_2b7444:
    // 0x2b7444: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2B7444u;
    {
        const bool branch_taken_0x2b7444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7444u;
        // 0x2b7448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7444) {
            ctx->pc = 0x2B7580u;
            goto label_2b7580;
        }
    }
    ctx->pc = 0x2B744Cu;
    // 0x2b744c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b7450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7454: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b7454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b7458: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b7458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b745c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b745cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7460: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2b7460u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x2b7464: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b7464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7468: 0x460da340  add.s       $f13, $f20, $f13
    ctx->pc = 0x2b7468u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    // 0x2b746c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b746cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7470: 0xc0bf3d4  jal         func_2FCF50
    ctx->pc = 0x2B7470u;
    SET_GPR_U32(ctx, 31, 0x2B7478u);
    ctx->pc = 0x2B7474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7470u;
    // 0x2b7474: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B7470u, 0x2B7478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7478u;
label_2b7478:
    // 0x2b7478: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2B7478u;
    {
        const bool branch_taken_0x2b7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7478u;
        // 0x2b747c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7478) {
            ctx->pc = 0x2B7584u;
            goto label_2b7584;
        }
    }
    ctx->pc = 0x2B7480u;
label_2b7480:
    // 0x2b7480: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x2b7480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2b7484: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b7488: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2b7488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2b748c: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2B748Cu;
    SET_GPR_U32(ctx, 31, 0x2B7494u);
    ctx->pc = 0x2B7490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B748Cu;
    // 0x2b7490: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2B748Cu, 0x2B7494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7494u;
label_2b7494:
    // 0x2b7494: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2B7494u;
    SET_GPR_U32(ctx, 31, 0x2B749Cu);
    ctx->pc = 0x2B7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7494u;
    // 0x2b7498: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2B7494u, 0x2B749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B749Cu;
label_2b749c:
    // 0x2b749c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b749cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b74a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74a4: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2B74A4u;
    SET_GPR_U32(ctx, 31, 0x2B74ACu);
    ctx->pc = 0x2B74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74A4u;
    // 0x2b74a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2B74A4u, 0x2B74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74ACu;
label_2b74ac:
    // 0x2b74ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b74acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b74b0: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2B74B0u;
    SET_GPR_U32(ctx, 31, 0x2B74B8u);
    ctx->pc = 0x2B74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74B0u;
    // 0x2b74b4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2B74B0u, 0x2B74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74B8u;
label_2b74b8:
    // 0x2b74b8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2b74b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2b74bc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b74bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2b74c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b74c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b74c4: 0x0  nop
    ctx->pc = 0x2b74c4u;
    // NOP
    // 0x2b74c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b74c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b74cc: 0x0  nop
    ctx->pc = 0x2b74ccu;
    // NOP
    // 0x2b74d0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2B74D0u;
    {
        const bool branch_taken_0x2b74d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74D0u;
        // 0x2b74d4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74d0) {
            ctx->pc = 0x2B7518u;
            goto label_2b7518;
        }
    }
    ctx->pc = 0x2B74D8u;
    // 0x2b74d8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B74D8u;
    SET_GPR_U32(ctx, 31, 0x2B74E0u);
    ctx->pc = 0x2B74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74D8u;
    // 0x2b74dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B74D8u, 0x2B74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74E0u;
label_2b74e0:
    // 0x2b74e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b74e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74e4: 0x52000027  beql        $s0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B74E4u;
    {
        const bool branch_taken_0x2b74e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b74e4) {
            ctx->pc = 0x2B74E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B74E4u;
            // 0x2b74e8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7584u;
            goto label_2b7584;
        }
    }
    ctx->pc = 0x2B74ECu;
    // 0x2b74ec: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2B74ECu;
    SET_GPR_U32(ctx, 31, 0x2B74F4u);
    ctx->pc = 0x2B74F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74ECu;
    // 0x2b74f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2B74ECu, 0x2B74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74F4u;
label_2b74f4:
    // 0x2b74f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b74f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b74f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b74f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b74fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7500: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b7500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b7504: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2B7504u;
    SET_GPR_U32(ctx, 31, 0x2B750Cu);
    ctx->pc = 0x2B7508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7504u;
    // 0x2b7508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2B7504u, 0x2B750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B750Cu;
label_2b750c:
    // 0x2b750c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B750Cu;
    {
        const bool branch_taken_0x2b750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B750Cu;
        // 0x2b7510: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b750c) {
            ctx->pc = 0x2B7584u;
            goto label_2b7584;
        }
    }
    ctx->pc = 0x2B7514u;
label_2b7514:
    // 0x2b7514: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b7514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2b7518:
    // 0x2b7518: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2b7518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b751c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2b751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x2b7520: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7520u;
    {
        const bool branch_taken_0x2b7520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7520u;
        // 0x2b7524: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7520) {
            ctx->pc = 0x2B7538u;
            goto label_2b7538;
        }
    }
    ctx->pc = 0x2B7528u;
    // 0x2b7528: 0x24430fa0  addiu       $v1, $v0, 0xFA0
    ctx->pc = 0x2b7528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2b752c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b752cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7530: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B7530u;
    {
        const bool branch_taken_0x2b7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7530u;
        // 0x2b7534: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7530) {
            ctx->pc = 0x2B7588u;
            goto label_2b7588;
        }
    }
    ctx->pc = 0x2B7538u;
label_2b7538:
    // 0x2b7538: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b7538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b753c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B753Cu;
    {
        const bool branch_taken_0x2b753c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B753Cu;
        // 0x2b7540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b753c) {
            ctx->pc = 0x2B7588u;
            goto label_2b7588;
        }
    }
    ctx->pc = 0x2B7544u;
    // 0x2b7544: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B7544u;
    SET_GPR_U32(ctx, 31, 0x2B754Cu);
    ctx->pc = 0x2B7548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7544u;
    // 0x2b7548: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B7544u, 0x2B754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B754Cu;
label_2b754c:
    // 0x2b754c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B754Cu;
    {
        const bool branch_taken_0x2b754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B754Cu;
        // 0x2b7550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b754c) {
            ctx->pc = 0x2B756Cu;
            goto label_2b756c;
        }
    }
    ctx->pc = 0x2B7554u;
    // 0x2b7554: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b7554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7558: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b7558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b755c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b755cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7560: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b7564: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x2B7564u;
    SET_GPR_U32(ctx, 31, 0x2B756Cu);
    ctx->pc = 0x2B7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7564u;
    // 0x2b7568: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2B7564u, 0x2B756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B756Cu;
label_2b756c:
    // 0x2b756c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b756cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7570: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b7570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7574: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2b7574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    // 0x2b7578: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x2B7578u;
    SET_GPR_U32(ctx, 31, 0x2B7580u);
    ctx->pc = 0x2B757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7578u;
    // 0x2b757c: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x2B7578u, 0x2B7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7580u;
label_2b7580:
    // 0x2b7580: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2b7580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2b7584:
    // 0x2b7584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7588:
    // 0x2b7588: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b7588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b758c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b758cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b7590: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b7590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b7594: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b7594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7598: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b7598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b759c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b759cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b75a0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b75a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b75a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b75a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b75a8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b75a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b75ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B75ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75ACu;
        // 0x2b75b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B75ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B75B4u;
    // 0x2b75b4: 0x0  nop
    ctx->pc = 0x2b75b4u;
    // NOP
    ctx->pc = 0x2b75b8u;
}
