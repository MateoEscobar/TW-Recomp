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

// Function: sub_00100100
// Address: 0x100100 - 0x1001c8
void sub_00100100_0x100100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100100_0x100100");
#endif

    switch (ctx->pc) {
        case 0x10012cu: goto label_10012c;
        case 0x10017cu: goto label_10017c;
        case 0x100198u: goto label_100198;
        case 0x1001a0u: goto label_1001a0;
        case 0x1001a8u: goto label_1001a8;
        case 0x1001c0u: goto label_1001c0;
        default: break;
    }

    ctx->pc = 0x100100u;

    // 0x100100: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x100100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x100104: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x100104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x100108: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x100108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x10010c: 0x4480f800  mtc1        $zero, $f31
    ctx->pc = 0x10010cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x100110: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x100110u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x100114: 0x40f  sync.p
    ctx->pc = 0x100114u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x100118: 0x44c0f800  ctc1        $zero, $FpcCsr
    ctx->pc = 0x100118u;
    ctx->fcr31 = GPR_U32(ctx, 0) & 0x0183FFFF;
    // 0x10011c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x10011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x100120: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x100120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x100124: 0x24426f80  addiu       $v0, $v0, 0x6F80
    ctx->pc = 0x100124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28544));
    // 0x100128: 0x24635b5c  addiu       $v1, $v1, 0x5B5C
    ctx->pc = 0x100128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23388));
label_10012c:
    // 0x10012c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x10012cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x100130: 0x0  nop
    ctx->pc = 0x100130u;
    // NOP
    // 0x100134: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x100134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x100138: 0x0  nop
    ctx->pc = 0x100138u;
    // NOP
    // 0x10013c: 0x0  nop
    ctx->pc = 0x10013cu;
    // NOP
    // 0x100140: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100140u;
    {
        const bool branch_taken_0x100140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100140u;
        // 0x100144: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100140) {
            ctx->pc = 0x10012Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10012c;
        }
    }
    ctx->pc = 0x100148u;
    // 0x100148: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x100148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x10014c: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x10014cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x100150: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x100150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x100154: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x100154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x100158: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x100158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x10015c: 0x2484e6f0  addiu       $a0, $a0, -0x1910
    ctx->pc = 0x10015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960880));
    // 0x100160: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100164: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x100164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x100168: 0x24e7f100  addiu       $a3, $a3, -0xF00
    ctx->pc = 0x100168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963456));
    // 0x10016c: 0x250801d0  addiu       $t0, $t0, 0x1D0
    ctx->pc = 0x10016cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 464));
    // 0x100170: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x100170u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100174: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x100174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x100178: 0xc  syscall     0
    ctx->pc = 0x100178u;
    ctx->pc = 0x10017Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10017c:
    // 0x10017c: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x10017cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100180: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x100180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x100184: 0x3c05018e  lui         $a1, 0x18E
    ctx->pc = 0x100184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)398 << 16));
    // 0x100188: 0x24845b5c  addiu       $a0, $a0, 0x5B5C
    ctx->pc = 0x100188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23388));
    // 0x10018c: 0x24a5a4a4  addiu       $a1, $a1, -0x5B5C
    ctx->pc = 0x10018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943908));
    // 0x100190: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x100190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x100194: 0xc  syscall     0
    ctx->pc = 0x100194u;
    ctx->pc = 0x100198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100198:
    // 0x100198: 0xc110d4c  jal         func_443530
    ctx->pc = 0x100198u;
    SET_GPR_U32(ctx, 31, 0x1001A0u);
    ctx->pc = 0x443530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443530u, 0x100198u, 0x1001A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A0u;
label_1001a0:
    // 0x1001a0: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x1001A0u;
    SET_GPR_U32(ctx, 31, 0x1001A8u);
    ctx->pc = 0x1001A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001A0u;
    // 0x1001a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x1001A0u, 0x1001A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A8u;
label_1001a8:
    // 0x1001a8: 0x42000038  ei
    ctx->pc = 0x1001a8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1001ac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1001acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1001b0: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x1001b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x1001b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1001b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6FF100u));
    // 0x1001b8: 0xc0511b4  jal         func_1446D0
    ctx->pc = 0x1001B8u;
    SET_GPR_U32(ctx, 31, 0x1001C0u);
    ctx->pc = 0x1001BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001B8u;
    // 0x1001bc: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1446D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1446D0u, 0x1001B8u, 0x1001C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001C0u;
label_1001c0:
    // 0x1001c0: 0x8110dd0  j           func_443740
    ctx->pc = 0x1001C0u;
    ctx->pc = 0x1001C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001C0u;
    // 0x1001c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443740u;
    sub_00443740_0x443740(rdram, ctx, runtime); return;
    ctx->pc = 0x1001C8u;
}
