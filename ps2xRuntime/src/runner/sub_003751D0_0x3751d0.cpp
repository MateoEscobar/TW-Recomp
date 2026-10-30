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

// Function: sub_003751D0
// Address: 0x3751d0 - 0x375370
void sub_003751D0_0x3751d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003751D0_0x3751d0");
#endif

    switch (ctx->pc) {
        case 0x37520cu: goto label_37520c;
        case 0x375214u: goto label_375214;
        case 0x375220u: goto label_375220;
        case 0x375238u: goto label_375238;
        case 0x375254u: goto label_375254;
        case 0x37526cu: goto label_37526c;
        case 0x375274u: goto label_375274;
        case 0x375288u: goto label_375288;
        case 0x375290u: goto label_375290;
        case 0x3752a4u: goto label_3752a4;
        case 0x3752acu: goto label_3752ac;
        case 0x3752c0u: goto label_3752c0;
        case 0x3752c8u: goto label_3752c8;
        case 0x3752e0u: goto label_3752e0;
        case 0x3752f4u: goto label_3752f4;
        case 0x375308u: goto label_375308;
        case 0x375338u: goto label_375338;
        default: break;
    }

    ctx->pc = 0x3751d0u;

    // 0x3751d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3751d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3751d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3751d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3751d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3751d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3751dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3751dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3751e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3751e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3751e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3751e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3751e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3751e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3751ec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3751ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3751f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3751f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3751f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3751f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3751f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3751f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3751fc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3751fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x375200: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x375200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x375204: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375204u;
    SET_GPR_U32(ctx, 31, 0x37520Cu);
    ctx->pc = 0x375208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375204u;
    // 0x375208: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375204u, 0x37520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37520Cu;
label_37520c:
    // 0x37520c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37520Cu;
    SET_GPR_U32(ctx, 31, 0x375214u);
    ctx->pc = 0x375210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37520Cu;
    // 0x375210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37520Cu, 0x375214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375214u;
label_375214:
    // 0x375214: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x375214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x375218: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x375218u;
    SET_GPR_U32(ctx, 31, 0x375220u);
    ctx->pc = 0x37521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375218u;
    // 0x37521c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x375218u, 0x375220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375220u;
label_375220:
    // 0x375220: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x375220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x375224: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x375224u;
    {
        const bool branch_taken_0x375224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375224u;
        // 0x375228: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375224) {
            ctx->pc = 0x37523Cu;
            goto label_37523c;
        }
    }
    ctx->pc = 0x37522Cu;
    // 0x37522c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x37522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375230: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x375230u;
    SET_GPR_U32(ctx, 31, 0x375238u);
    ctx->pc = 0x375234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375230u;
    // 0x375234: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x375230u, 0x375238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375238u;
label_375238:
    // 0x375238: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x375238u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37523c:
    // 0x37523c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x37523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375240: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375244: 0x3410bff0  ori         $s0, $zero, 0xBFF0
    ctx->pc = 0x375244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x375248: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x375248u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x37524c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37524Cu;
    SET_GPR_U32(ctx, 31, 0x375254u);
    ctx->pc = 0x375250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37524Cu;
    // 0x375250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37524Cu, 0x375254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375254u;
label_375254:
    // 0x375254: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x375254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x375258: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x37525c: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x37525cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375260: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x375260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375264: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375264u;
    SET_GPR_U32(ctx, 31, 0x37526Cu);
    ctx->pc = 0x375268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375264u;
    // 0x375268: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375264u, 0x37526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37526Cu;
label_37526c:
    // 0x37526c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37526Cu;
    SET_GPR_U32(ctx, 31, 0x375274u);
    ctx->pc = 0x375270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37526Cu;
    // 0x375270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37526Cu, 0x375274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375274u;
label_375274:
    // 0x375274: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x375274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375278: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x375278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37527c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37527cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375280: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375280u;
    SET_GPR_U32(ctx, 31, 0x375288u);
    ctx->pc = 0x375284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375280u;
    // 0x375284: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375280u, 0x375288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375288u;
label_375288:
    // 0x375288: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375288u;
    SET_GPR_U32(ctx, 31, 0x375290u);
    ctx->pc = 0x37528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375288u;
    // 0x37528c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375288u, 0x375290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375290u;
label_375290:
    // 0x375290: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375294: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375294u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375298: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37529c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37529Cu;
    SET_GPR_U32(ctx, 31, 0x3752A4u);
    ctx->pc = 0x3752A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37529Cu;
    // 0x3752a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37529Cu, 0x3752A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752A4u;
label_3752a4:
    // 0x3752a4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3752A4u;
    SET_GPR_U32(ctx, 31, 0x3752ACu);
    ctx->pc = 0x3752A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752A4u;
    // 0x3752a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3752A4u, 0x3752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752ACu;
label_3752ac:
    // 0x3752ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3752acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3752b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3752b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3752b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3752B8u;
    SET_GPR_U32(ctx, 31, 0x3752C0u);
    ctx->pc = 0x3752BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752B8u;
    // 0x3752bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3752B8u, 0x3752C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752C0u;
label_3752c0:
    // 0x3752c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3752C0u;
    SET_GPR_U32(ctx, 31, 0x3752C8u);
    ctx->pc = 0x3752C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752C0u;
    // 0x3752c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3752C0u, 0x3752C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752C8u;
label_3752c8:
    // 0x3752c8: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3752c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3752cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3752ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752d0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3752d0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3752d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3752d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3752d8: 0xc102488  jal         func_409220
    ctx->pc = 0x3752D8u;
    SET_GPR_U32(ctx, 31, 0x3752E0u);
    ctx->pc = 0x3752DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752D8u;
    // 0x3752dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3752D8u, 0x3752E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752E0u;
label_3752e0:
    // 0x3752e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3752e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3752e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752e8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3752e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3752ec: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3752ECu;
    SET_GPR_U32(ctx, 31, 0x3752F4u);
    ctx->pc = 0x3752F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752ECu;
    // 0x3752f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3752ECu, 0x3752F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752F4u;
label_3752f4:
    // 0x3752f4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x3752f4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3752f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3752f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3752fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x375300: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375300u;
    SET_GPR_U32(ctx, 31, 0x375308u);
    ctx->pc = 0x375304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375300u;
    // 0x375304: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375300u, 0x375308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375308u;
label_375308:
    // 0x375308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x375308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37530c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x37530cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375310: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x375310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x375314: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x375314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375318: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x375318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x37531c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x37531cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375320: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x375320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375324: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x375324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375328: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x375328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37532c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x37532cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375330: 0xc0c5868  jal         func_3161A0
    ctx->pc = 0x375330u;
    SET_GPR_U32(ctx, 31, 0x375338u);
    ctx->pc = 0x375334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375330u;
    // 0x375334: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3161A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3161A0u, 0x375330u, 0x375338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375338u;
label_375338:
    // 0x375338: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x375338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37533c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375340: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x375340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x375344: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x375344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x375348: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x375348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37534c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x37534cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x375350: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x375350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375354: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x375354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375358: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x375358u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37535c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x37535cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x375360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375364: 0x3e00008  jr          $ra
    ctx->pc = 0x375364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375364u;
        // 0x375368: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37536Cu;
    // 0x37536c: 0x0  nop
    ctx->pc = 0x37536cu;
    // NOP
    ctx->pc = 0x375370u;
}
