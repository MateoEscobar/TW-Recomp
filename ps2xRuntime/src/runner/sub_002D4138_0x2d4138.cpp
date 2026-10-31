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

// Function: sub_002D4138
// Address: 0x2d4138 - 0x2d4228
void sub_002D4138_0x2d4138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4138_0x2d4138");
#endif

    switch (ctx->pc) {
        case 0x2d41e8u: goto label_2d41e8;
        case 0x2d4200u: goto label_2d4200;
        case 0x2d4210u: goto label_2d4210;
        default: break;
    }

    ctx->pc = 0x2d4138u;

    // 0x2d4138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d413c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4140: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d4144: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d4144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d4148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d414c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4154: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d4154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4158: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x2d4158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x2d415c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d4160: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x2d4160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x2d4164: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x2d4164u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d4168: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2d4168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d416c: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2d416cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2d4170: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2d4170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4178: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2d4178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2d417c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d417cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d4180: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d4180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d4184: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x2d4184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x2d4188: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x2d4188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x2d418c: 0xe60c0020  swc1        $f12, 0x20($s0)
    ctx->pc = 0x2d418cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d4190: 0xae090024  sw          $t1, 0x24($s0)
    ctx->pc = 0x2d4190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 9));
    // 0x2d4194: 0xae0a0028  sw          $t2, 0x28($s0)
    ctx->pc = 0x2d4194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 10));
    // 0x2d4198: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d4198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d419c: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d419cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d41a0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2d41a4: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2d41a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d41a8: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x2d41a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d41ac: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2d41acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d41b0: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x2d41b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2d41b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d41b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41b8: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x2d41b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2d41bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d41bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d41c0: 0xa203002d  sb          $v1, 0x2D($s0)
    ctx->pc = 0x2d41c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d41c4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2d41c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2d41c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2d41c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2d41cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d41ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d41d0: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x2d41d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d41d4: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x2d41d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2d41d8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x2d41d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2d41dc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2d41dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2d41e0: 0xc087612  jal         func_21D848
    ctx->pc = 0x2D41E0u;
    SET_GPR_U32(ctx, 31, 0x2D41E8u);
    ctx->pc = 0x2D41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41E0u;
    // 0x2d41e4: 0xfe2300e0  sd          $v1, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D41E0u, 0x2D41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41E8u;
label_2d41e8:
    // 0x2d41e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d41ec: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x2d41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x2d41f0: 0xa060011e  sb          $zero, 0x11E($v1)
    ctx->pc = 0x2d41f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d41f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d41f8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D41F8u;
    SET_GPR_U32(ctx, 31, 0x2D4200u);
    ctx->pc = 0x2D41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41F8u;
    // 0x2d41fc: 0xa040011f  sb          $zero, 0x11F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D41F8u, 0x2D4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4200u;
label_2d4200:
    // 0x2d4200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4200u;
    {
        const bool branch_taken_0x2d4200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4200u;
        // 0x2d4204: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4200) {
            ctx->pc = 0x2D4214u;
            goto label_2d4214;
        }
    }
    ctx->pc = 0x2D4208u;
    // 0x2d4208: 0xc0962a2  jal         func_258A88
    ctx->pc = 0x2D4208u;
    SET_GPR_U32(ctx, 31, 0x2D4210u);
    ctx->pc = 0x2D420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4208u;
    // 0x2d420c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x2D4208u, 0x2D4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4210u;
label_2d4210:
    // 0x2d4210: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d4210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d4214:
    // 0x2d4214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d4218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d421c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4220: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4220u;
        // 0x2d4224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4228u;
}
