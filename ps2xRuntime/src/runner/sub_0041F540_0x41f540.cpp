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

// Function: sub_0041F540
// Address: 0x41f540 - 0x41f5f8
void sub_0041F540_0x41f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F540_0x41f540");
#endif

    ctx->pc = 0x41f540u;

    // 0x41f540: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x41f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f544: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41f544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f548: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x41f548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41f54c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x41f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x41f550: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x41f550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x41f554: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x41F554u;
    {
        const bool branch_taken_0x41f554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f554) {
            ctx->pc = 0x41F558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F554u;
            // 0x41f558: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F568u;
            goto label_41f568;
        }
    }
    ctx->pc = 0x41F55Cu;
    // 0x41f55c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41f560: 0x3e00008  jr          $ra
    ctx->pc = 0x41F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F560u;
        // 0x41f564: 0x24425010  addiu       $v0, $v0, 0x5010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F568u;
label_41f568:
    // 0x41f568: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x41f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
    // 0x41f56c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41f570: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x41f570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x41f574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41F574u;
    {
        const bool branch_taken_0x41f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F574u;
        // 0x41f578: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f574) {
            ctx->pc = 0x41F58Cu;
            goto label_41f58c;
        }
    }
    ctx->pc = 0x41F57Cu;
    // 0x41f57c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x41f57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x41f580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41f584: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x41F584u;
    {
        const bool branch_taken_0x41f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F584u;
        // 0x41f588: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f584) {
            ctx->pc = 0x41F5A0u;
            goto label_41f5a0;
        }
    }
    ctx->pc = 0x41F58Cu;
label_41f58c:
    // 0x41f58c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x41f58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x41f590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41F590u;
    {
        const bool branch_taken_0x41f590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F590u;
        // 0x41f594: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f590) {
            ctx->pc = 0x41F5A0u;
            goto label_41f5a0;
        }
    }
    ctx->pc = 0x41F598u;
    // 0x41f598: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x41f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x41f59c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x41f59cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41f5a0:
    // 0x41f5a0: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x41f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f5a4: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x41f5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x41f5a8: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x41f5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41f5ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x41f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x41f5b0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41f5b4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x41f5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x41f5b8: 0x24a548e0  addiu       $a1, $a1, 0x48E0
    ctx->pc = 0x41f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18656));
    // 0x41f5bc: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x41f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x41f5c0: 0x90c3000c  lbu         $v1, 0xC($a2)
    ctx->pc = 0x41f5c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x41f5c4: 0x25075010  addiu       $a3, $t0, 0x5010
    ctx->pc = 0x41f5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 20496));
    // 0x41f5c8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x41f5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f5cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x41f5d0: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x41f5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x41f5d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x41f5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x41f5d8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x41f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x41f5dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41f5e0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x41f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41f5e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x41f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41f5e8: 0xe5005010  swc1        $f0, 0x5010($t0)
    ctx->pc = 0x41f5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20496), bits); }
    // 0x41f5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x41F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F5ECu;
        // 0x41f5f0: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F5F4u;
    // 0x41f5f4: 0x0  nop
    ctx->pc = 0x41f5f4u;
    // NOP
    ctx->pc = 0x41f5f8u;
}
