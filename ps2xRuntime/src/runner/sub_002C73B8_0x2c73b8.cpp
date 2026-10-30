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

// Function: sub_002C73B8
// Address: 0x2c73b8 - 0x2c74d8
void sub_002C73B8_0x2c73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C73B8_0x2c73b8");
#endif

    switch (ctx->pc) {
        case 0x2c7404u: goto label_2c7404;
        case 0x2c742cu: goto label_2c742c;
        case 0x2c7470u: goto label_2c7470;
        case 0x2c7484u: goto label_2c7484;
        default: break;
    }

    ctx->pc = 0x2c73b8u;

    // 0x2c73b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c73b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c73bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2c73c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c73c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c73c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c73c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c73c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c73cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c73d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c73d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c73d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c73d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c73dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c73dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c73e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c73e4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c73e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c73e8: 0x80e201b0  lb          $v0, 0x1B0($a3)
    ctx->pc = 0x2c73e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x2c73ec: 0x8c67489c  lw          $a3, 0x489C($v1)
    ctx->pc = 0x2c73ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2c73f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c73f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c73f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c73f8: 0x24420228  addiu       $v0, $v0, 0x228
    ctx->pc = 0x2c73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x2c73fc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C73FCu;
    SET_GPR_U32(ctx, 31, 0x2C7404u);
    ctx->pc = 0x2C7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C73FCu;
    // 0x2c7400: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C73FCu, 0x2C7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7404u;
label_2c7404:
    // 0x2c7404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c7404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7408: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2c7408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2c740c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x2c740cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2c7410: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2c7414: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c7414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c7418: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c7418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c741c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2c7420: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c7420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c7424: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2C7424u;
    SET_GPR_U32(ctx, 31, 0x2C742Cu);
    ctx->pc = 0x2C7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7424u;
    // 0x2c7428: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C7424u, 0x2C742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C742Cu;
label_2c742c:
    // 0x2c742c: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x2c742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7430: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c7430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c7434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c7434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7438: 0x0  nop
    ctx->pc = 0x2c7438u;
    // NOP
    // 0x2c743c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x2C743Cu;
    {
        const bool branch_taken_0x2c743c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C743Cu;
        // 0x2c7440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c743c) {
            ctx->pc = 0x2C74B8u;
            goto label_2c74b8;
        }
    }
    ctx->pc = 0x2C7444u;
    // 0x2c7444: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2c7444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2c7448: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2c7448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c744c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C744Cu;
    {
        const bool branch_taken_0x2c744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C744Cu;
        // 0x2c7450: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c744c) {
            ctx->pc = 0x2C7474u;
            goto label_2c7474;
        }
    }
    ctx->pc = 0x2C7454u;
    // 0x2c7454: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2c7454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c7458: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2c7458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2c745c: 0x260310f8  addiu       $v1, $s0, 0x10F8
    ctx->pc = 0x2c745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4344));
    // 0x2c7460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c7460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7468: 0xc107908  jal         func_41E420
    ctx->pc = 0x2C7468u;
    SET_GPR_U32(ctx, 31, 0x2C7470u);
    ctx->pc = 0x2C746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7468u;
    // 0x2c746c: 0x90460004  lbu         $a2, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2C7468u, 0x2C7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7470u;
label_2c7470:
    // 0x2c7470: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c7470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7474:
    // 0x2c7474: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2c7474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2c7478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c7478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c747c: 0xc107908  jal         func_41E420
    ctx->pc = 0x2C747Cu;
    SET_GPR_U32(ctx, 31, 0x2C7484u);
    ctx->pc = 0x2C7480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C747Cu;
    // 0x2c7480: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2C747Cu, 0x2C7484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7484u;
label_2c7484:
    // 0x2c7484: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2c7484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2c7488: 0x260510f8  addiu       $a1, $s0, 0x10F8
    ctx->pc = 0x2c7488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4344));
    // 0x2c748c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c748cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c7490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c7490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c7494: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x2c7494u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x2c7498: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2c7498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c749c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C749Cu;
    {
        const bool branch_taken_0x2c749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C749Cu;
        // 0x2c74a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c749c) {
            ctx->pc = 0x2C74B8u;
            goto label_2c74b8;
        }
    }
    ctx->pc = 0x2C74A4u;
    // 0x2c74a4: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x2c74a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c74a8: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2c74a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c74ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C74ACu;
    {
        const bool branch_taken_0x2c74ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74ACu;
        // 0x2c74b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74ac) {
            ctx->pc = 0x2C74B8u;
            goto label_2c74b8;
        }
    }
    ctx->pc = 0x2C74B4u;
    // 0x2c74b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c74b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c74b8:
    // 0x2c74b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c74b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c74bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c74bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c74c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c74c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c74c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c74c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c74c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c74c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c74cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c74ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c74d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C74D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74D0u;
        // 0x2c74d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C74D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C74D8u;
}
