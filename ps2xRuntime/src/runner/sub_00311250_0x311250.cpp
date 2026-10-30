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

// Function: sub_00311250
// Address: 0x311250 - 0x3114e0
void sub_00311250_0x311250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311250_0x311250");
#endif

    switch (ctx->pc) {
        case 0x311288u: goto label_311288;
        case 0x311290u: goto label_311290;
        case 0x3112a4u: goto label_3112a4;
        case 0x3112b0u: goto label_3112b0;
        case 0x3112c4u: goto label_3112c4;
        case 0x3112d4u: goto label_3112d4;
        case 0x3112e8u: goto label_3112e8;
        case 0x3112fcu: goto label_3112fc;
        case 0x311314u: goto label_311314;
        case 0x311328u: goto label_311328;
        case 0x311338u: goto label_311338;
        case 0x31134cu: goto label_31134c;
        case 0x31135cu: goto label_31135c;
        case 0x31139cu: goto label_31139c;
        case 0x3113ccu: goto label_3113cc;
        case 0x3113dcu: goto label_3113dc;
        case 0x3113f0u: goto label_3113f0;
        case 0x311404u: goto label_311404;
        case 0x311418u: goto label_311418;
        case 0x311434u: goto label_311434;
        case 0x31144cu: goto label_31144c;
        case 0x311458u: goto label_311458;
        case 0x31146cu: goto label_31146c;
        case 0x311490u: goto label_311490;
        case 0x3114b0u: goto label_3114b0;
        default: break;
    }

    ctx->pc = 0x311250u;

    // 0x311250: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x311250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x311254: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x311254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311258: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x311258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31125c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x311260: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x311260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311264: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x311264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x311268: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x311268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31126c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x311270: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x311270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x311274: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x311274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x311278: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x311278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31127c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311280: 0xc0e4060  jal         func_390180
    ctx->pc = 0x311280u;
    SET_GPR_U32(ctx, 31, 0x311288u);
    ctx->pc = 0x311284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311280u;
    // 0x311284: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x311280u, 0x311288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311288u;
label_311288:
    // 0x311288: 0xc08a61a  jal         func_229868
    ctx->pc = 0x311288u;
    SET_GPR_U32(ctx, 31, 0x311290u);
    ctx->pc = 0x31128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311288u;
    // 0x31128c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x311288u, 0x311290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311290u;
label_311290:
    // 0x311290: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311294: 0x52200087  beql        $s1, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x311294u;
    {
        const bool branch_taken_0x311294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x311294) {
            ctx->pc = 0x311298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311294u;
            // 0x311298: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x31129Cu;
    // 0x31129c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31129Cu;
    SET_GPR_U32(ctx, 31, 0x3112A4u);
    ctx->pc = 0x3112A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31129Cu;
    // 0x3112a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31129Cu, 0x3112A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112A4u;
label_3112a4:
    // 0x3112a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3112a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112a8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x3112A8u;
    SET_GPR_U32(ctx, 31, 0x3112B0u);
    ctx->pc = 0x3112ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112A8u;
    // 0x3112ac: 0x268401a4  addiu       $a0, $s4, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x3112A8u, 0x3112B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112B0u;
label_3112b0:
    // 0x3112b0: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x3112B0u;
    {
        const bool branch_taken_0x3112b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3112b0) {
            ctx->pc = 0x3112B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3112B0u;
            // 0x3112b4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x3112B8u;
    // 0x3112b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3112b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112bc: 0xc08a096  jal         func_228258
    ctx->pc = 0x3112BCu;
    SET_GPR_U32(ctx, 31, 0x3112C4u);
    ctx->pc = 0x3112C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112BCu;
    // 0x3112c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x3112BCu, 0x3112C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112C4u;
label_3112c4:
    // 0x3112c4: 0x5056007b  beql        $v0, $s6, . + 4 + (0x7B << 2)
    ctx->pc = 0x3112C4u;
    {
        const bool branch_taken_0x3112c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x3112c4) {
            ctx->pc = 0x3112C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3112C4u;
            // 0x3112c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x3112CCu;
    // 0x3112cc: 0xc08a08a  jal         func_228228
    ctx->pc = 0x3112CCu;
    SET_GPR_U32(ctx, 31, 0x3112D4u);
    ctx->pc = 0x3112D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112CCu;
    // 0x3112d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3112CCu, 0x3112D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112D4u;
label_3112d4:
    // 0x3112d4: 0x10560076  beq         $v0, $s6, . + 4 + (0x76 << 2)
    ctx->pc = 0x3112D4u;
    {
        const bool branch_taken_0x3112d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x3112D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D4u;
        // 0x3112d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112d4) {
            ctx->pc = 0x3114B0u;
            goto label_3114b0;
        }
    }
    ctx->pc = 0x3112DCu;
    // 0x3112dc: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x3112dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x3112e0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x3112E0u;
    SET_GPR_U32(ctx, 31, 0x3112E8u);
    ctx->pc = 0x3112E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112E0u;
    // 0x3112e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3112E0u, 0x3112E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112E8u;
label_3112e8:
    // 0x3112e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3112e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3112ec: 0x50560071  beql        $v0, $s6, . + 4 + (0x71 << 2)
    ctx->pc = 0x3112ECu;
    {
        const bool branch_taken_0x3112ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x3112ec) {
            ctx->pc = 0x3112F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3112ECu;
            // 0x3112f0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x3112F4u;
    // 0x3112f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x3112F4u;
    SET_GPR_U32(ctx, 31, 0x3112FCu);
    ctx->pc = 0x3112F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3112F4u;
    // 0x3112f8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3112F4u, 0x3112FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112FCu;
label_3112fc:
    // 0x3112fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3112fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311300: 0x5240006c  beql        $s2, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x311300u;
    {
        const bool branch_taken_0x311300 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x311300) {
            ctx->pc = 0x311304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311300u;
            // 0x311304: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x311308u;
    // 0x311308: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x311308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31130c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x31130Cu;
    SET_GPR_U32(ctx, 31, 0x311314u);
    ctx->pc = 0x311310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31130Cu;
    // 0x311310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x31130Cu, 0x311314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311314u;
label_311314:
    // 0x311314: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x311314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x311318: 0x50600066  beql        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x311318u;
    {
        const bool branch_taken_0x311318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x311318) {
            ctx->pc = 0x31131Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311318u;
            // 0x31131c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x311320u;
    // 0x311320: 0xc087502  jal         func_21D408
    ctx->pc = 0x311320u;
    SET_GPR_U32(ctx, 31, 0x311328u);
    ctx->pc = 0x311324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311320u;
    // 0x311324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311320u, 0x311328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311328u;
label_311328:
    // 0x311328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31132c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31132cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311330: 0xc0a44ac  jal         func_2912B0
    ctx->pc = 0x311330u;
    SET_GPR_U32(ctx, 31, 0x311338u);
    ctx->pc = 0x311334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311330u;
    // 0x311334: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x311330u, 0x311338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311338u;
label_311338:
    // 0x311338: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x311338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31133c: 0x5260005d  beql        $s3, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x31133Cu;
    {
        const bool branch_taken_0x31133c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31133c) {
            ctx->pc = 0x311340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31133Cu;
            // 0x311340: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x311344u;
    // 0x311344: 0xc08a08a  jal         func_228228
    ctx->pc = 0x311344u;
    SET_GPR_U32(ctx, 31, 0x31134Cu);
    ctx->pc = 0x311348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311344u;
    // 0x311348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x311344u, 0x31134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31134Cu;
label_31134c:
    // 0x31134c: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x31134Cu;
    {
        const bool branch_taken_0x31134c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x311350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31134Cu;
        // 0x311350: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31134c) {
            ctx->pc = 0x311368u;
            goto label_311368;
        }
    }
    ctx->pc = 0x311354u;
    // 0x311354: 0xc08a096  jal         func_228258
    ctx->pc = 0x311354u;
    SET_GPR_U32(ctx, 31, 0x31135Cu);
    ctx->pc = 0x311358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311354u;
    // 0x311358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x311354u, 0x31135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31135Cu;
label_31135c:
    // 0x31135c: 0x14560055  bne         $v0, $s6, . + 4 + (0x55 << 2)
    ctx->pc = 0x31135Cu;
    {
        const bool branch_taken_0x31135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x311360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31135Cu;
        // 0x311360: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31135c) {
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x311364u;
    // 0x311364: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x311364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_311368:
    // 0x311368: 0xc6940140  lwc1        $f20, 0x140($s4)
    ctx->pc = 0x311368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31136c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x31136cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x311370: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x311370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x311374: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x311374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x311378: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x311378u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x31137c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31137cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x311380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311384: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x311384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x311388: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x311388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31138c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x31138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x311390: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x311390u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x311394: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x311394u;
    SET_GPR_U32(ctx, 31, 0x31139Cu);
    ctx->pc = 0x311398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311394u;
    // 0x311398: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x311394u, 0x31139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31139Cu;
label_31139c:
    // 0x31139c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x31139cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3113a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3113a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3113a4: 0x0  nop
    ctx->pc = 0x3113a4u;
    // NOP
    // 0x3113a8: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
    ctx->pc = 0x3113A8u;
    {
        const bool branch_taken_0x3113a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3113a8) {
            ctx->pc = 0x3113ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3113A8u;
            // 0x3113ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x3113B0u;
    // 0x3113b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3113b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3113b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3113b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3113b8: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x3113b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x3113bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3113bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3113c0: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x3113c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x3113c4: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x3113C4u;
    SET_GPR_U32(ctx, 31, 0x3113CCu);
    ctx->pc = 0x3113C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113C4u;
    // 0x3113c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x3113C4u, 0x3113CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113CCu;
label_3113cc:
    // 0x3113cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3113ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3113d0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3113d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3113d4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3113D4u;
    SET_GPR_U32(ctx, 31, 0x3113DCu);
    ctx->pc = 0x3113D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113D4u;
    // 0x3113d8: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3113D4u, 0x3113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113DCu;
label_3113dc:
    // 0x3113dc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3113dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3113e0: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3113E0u;
    {
        const bool branch_taken_0x3113e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3113e0) {
            ctx->pc = 0x3113E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3113E0u;
            // 0x3113e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x3113E8u;
    // 0x3113e8: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x3113E8u;
    SET_GPR_U32(ctx, 31, 0x3113F0u);
    ctx->pc = 0x3113ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113E8u;
    // 0x3113ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x3113E8u, 0x3113F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113F0u;
label_3113f0:
    // 0x3113f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3113f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3113f4: 0x56b6002f  bnel        $s5, $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x3113F4u;
    {
        const bool branch_taken_0x3113f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        if (branch_taken_0x3113f4) {
            ctx->pc = 0x3113F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3113F4u;
            // 0x3113f8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x3113FCu;
    // 0x3113fc: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x3113FCu;
    SET_GPR_U32(ctx, 31, 0x311404u);
    ctx->pc = 0x311400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113FCu;
    // 0x311400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3113FCu, 0x311404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311404u;
label_311404:
    // 0x311404: 0x8283002e  lb          $v1, 0x2E($s4)
    ctx->pc = 0x311404u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x311408: 0x5c60002a  bgtzl       $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x311408u;
    {
        const bool branch_taken_0x311408 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x311408) {
            ctx->pc = 0x31140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311408u;
            // 0x31140c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114B4u;
            goto label_3114b4;
        }
    }
    ctx->pc = 0x311410u;
    // 0x311410: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x311410u;
    SET_GPR_U32(ctx, 31, 0x311418u);
    ctx->pc = 0x311414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311410u;
    // 0x311414: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x311410u, 0x311418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311418u;
label_311418:
    // 0x311418: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x311418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31141c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x31141Cu;
    {
        const bool branch_taken_0x31141c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x311420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31141Cu;
        // 0x311420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31141c) {
            ctx->pc = 0x31144Cu;
            goto label_31144c;
        }
    }
    ctx->pc = 0x311424u;
    // 0x311424: 0x86100002  lh          $s0, 0x2($s0)
    ctx->pc = 0x311424u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x311428: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x311428u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x31142c: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x31142Cu;
    SET_GPR_U32(ctx, 31, 0x311434u);
    ctx->pc = 0x311430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31142Cu;
    // 0x311430: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x31142Cu, 0x311434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311434u;
label_311434:
    // 0x311434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x311438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31143c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31143cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x311440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x311440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311444: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x311444u;
    SET_GPR_U32(ctx, 31, 0x31144Cu);
    ctx->pc = 0x311448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311444u;
    // 0x311448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x311444u, 0x31144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31144Cu;
label_31144c:
    // 0x31144c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311450: 0xc089f98  jal         func_227E60
    ctx->pc = 0x311450u;
    SET_GPR_U32(ctx, 31, 0x311458u);
    ctx->pc = 0x311454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311450u;
    // 0x311454: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x311450u, 0x311458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311458u;
label_311458:
    // 0x311458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31145c: 0x16150005  bne         $s0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x31145Cu;
    {
        const bool branch_taken_0x31145c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x311460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31145Cu;
        // 0x311460: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31145c) {
            ctx->pc = 0x311474u;
            goto label_311474;
        }
    }
    ctx->pc = 0x311464u;
    // 0x311464: 0xc089f66  jal         func_227D98
    ctx->pc = 0x311464u;
    SET_GPR_U32(ctx, 31, 0x31146Cu);
    ctx->pc = 0x311468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311464u;
    // 0x311468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x311464u, 0x31146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31146Cu;
label_31146c:
    // 0x31146c: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x31146cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x311470: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x311470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_311474:
    // 0x311474: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x311474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x311478: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x311478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31147c: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x31147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x311480: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x311480u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x311484: 0x71900b  movn        $s2, $v1, $s1
    ctx->pc = 0x311484u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x311488: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x311488u;
    SET_GPR_U32(ctx, 31, 0x311490u);
    ctx->pc = 0x31148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311488u;
    // 0x31148c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x311488u, 0x311490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311490u;
label_311490:
    // 0x311490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x311490u;
    {
        const bool branch_taken_0x311490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311490u;
        // 0x311494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311490) {
            ctx->pc = 0x3114B0u;
            goto label_3114b0;
        }
    }
    ctx->pc = 0x311498u;
    // 0x311498: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x311498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31149c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31149cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3114a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3114a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3114a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3114a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3114a8: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x3114A8u;
    SET_GPR_U32(ctx, 31, 0x3114B0u);
    ctx->pc = 0x3114ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3114A8u;
    // 0x3114ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x3114A8u, 0x3114B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3114B0u;
label_3114b0:
    // 0x3114b0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3114b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3114b4:
    // 0x3114b4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3114b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3114b8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3114b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3114bc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3114bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3114c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3114c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3114c4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3114c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3114c8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3114c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3114cc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3114ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3114d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3114d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3114d4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3114d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3114d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3114D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114D8u;
        // 0x3114dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3114D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3114E0u;
}
