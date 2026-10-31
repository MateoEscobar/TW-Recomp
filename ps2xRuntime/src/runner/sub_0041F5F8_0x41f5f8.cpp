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

// Function: sub_0041F5F8
// Address: 0x41f5f8 - 0x41f6b0
void sub_0041F5F8_0x41f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F5F8_0x41f5f8");
#endif

    ctx->pc = 0x41f5f8u;

    // 0x41f5f8: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x41f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f5fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41f5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f600: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x41f600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41f604: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x41f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x41f608: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x41f608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x41f60c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x41F60Cu;
    {
        const bool branch_taken_0x41f60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f60c) {
            ctx->pc = 0x41F610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F60Cu;
            // 0x41f610: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F620u;
            goto label_41f620;
        }
    }
    ctx->pc = 0x41F614u;
    // 0x41f614: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41f618: 0x3e00008  jr          $ra
    ctx->pc = 0x41F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F618u;
        // 0x41f61c: 0x24425018  addiu       $v0, $v0, 0x5018 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F620u;
label_41f620:
    // 0x41f620: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x41f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
    // 0x41f624: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41f628: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x41f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x41f62c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41F62Cu;
    {
        const bool branch_taken_0x41f62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F62Cu;
        // 0x41f630: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f62c) {
            ctx->pc = 0x41F644u;
            goto label_41f644;
        }
    }
    ctx->pc = 0x41F634u;
    // 0x41f634: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x41f634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x41f638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41f63c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x41F63Cu;
    {
        const bool branch_taken_0x41f63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F63Cu;
        // 0x41f640: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f63c) {
            ctx->pc = 0x41F658u;
            goto label_41f658;
        }
    }
    ctx->pc = 0x41F644u;
label_41f644:
    // 0x41f644: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x41f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x41f648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41F648u;
    {
        const bool branch_taken_0x41f648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F648u;
        // 0x41f64c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f648) {
            ctx->pc = 0x41F658u;
            goto label_41f658;
        }
    }
    ctx->pc = 0x41F650u;
    // 0x41f650: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x41f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x41f654: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x41f654u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41f658:
    // 0x41f658: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x41f658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f65c: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x41f65cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x41f660: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x41f660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41f664: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x41f664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x41f668: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41f668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41f66c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x41f66cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x41f670: 0x24a54c78  addiu       $a1, $a1, 0x4C78
    ctx->pc = 0x41f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19576));
    // 0x41f674: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x41f674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x41f678: 0x90c3000c  lbu         $v1, 0xC($a2)
    ctx->pc = 0x41f678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x41f67c: 0x25075018  addiu       $a3, $t0, 0x5018
    ctx->pc = 0x41f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 20504));
    // 0x41f680: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x41f680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f684: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41f684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x41f688: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x41f688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41f68c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x41f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x41f690: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x41f690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x41f694: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41f694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41f698: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x41f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f69c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x41f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f6a0: 0xe5005018  swc1        $f0, 0x5018($t0)
    ctx->pc = 0x41f6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20504), bits); }
    // 0x41f6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41F6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6A4u;
        // 0x41f6a8: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F6ACu;
    // 0x41f6ac: 0x0  nop
    ctx->pc = 0x41f6acu;
    // NOP
    ctx->pc = 0x41f6b0u;
}
