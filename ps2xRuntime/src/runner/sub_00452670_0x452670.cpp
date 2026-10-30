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

// Function: sub_00452670
// Address: 0x452670 - 0x452730
void sub_00452670_0x452670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452670_0x452670");
#endif

    switch (ctx->pc) {
        case 0x452710u: goto label_452710;
        default: break;
    }

    ctx->pc = 0x452670u;

    // 0x452670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x452670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x452674: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x452674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x452678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45267c: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x45267cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x452680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x452680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x452684: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x452684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452688: 0x3c0b0045  lui         $t3, 0x45
    ctx->pc = 0x452688u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)69 << 16));
    // 0x45268c: 0x3c07efff  lui         $a3, 0xEFFF
    ctx->pc = 0x45268cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61439 << 16));
    // 0x452690: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x452690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x452694: 0x256b2730  addiu       $t3, $t3, 0x2730
    ctx->pc = 0x452694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10032));
    // 0x452698: 0x8c8c002c  lw          $t4, 0x2C($a0)
    ctx->pc = 0x452698u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x45269c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x45269cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4526a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4526a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4526a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4526a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4526a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4526a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4526ac: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x4526acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4526b0: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x4526b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x4526b4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x4526b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x4526b8: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x4526b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x4526bc: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x4526bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4526c0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x4526c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4526c4: 0xac480140  sw          $t0, 0x140($v0)
    ctx->pc = 0x4526c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 8));
    // 0x4526c8: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x4526c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x4526cc: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4526ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4526d0: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x4526d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4526d4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x4526d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4526d8: 0xac680150  sw          $t0, 0x150($v1)
    ctx->pc = 0x4526d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 8));
    // 0x4526dc: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x4526dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x4526e0: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x4526e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4526e4: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x4526e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4526e8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x4526e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4526ec: 0xac48014c  sw          $t0, 0x14C($v0)
    ctx->pc = 0x4526ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 8));
    // 0x4526f0: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x4526f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x4526f4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x4526f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4526f8: 0x6a4018  mult        $t0, $v1, $t2
    ctx->pc = 0x4526f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4526fc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x4526fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x452700: 0xac62015c  sw          $v0, 0x15C($v1)
    ctx->pc = 0x452700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 2));
    // 0x452704: 0xae0b0024  sw          $t3, 0x24($s0)
    ctx->pc = 0x452704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 11));
    // 0x452708: 0xc11833c  jal         func_460CF0
    ctx->pc = 0x452708u;
    SET_GPR_U32(ctx, 31, 0x452710u);
    ctx->pc = 0x45270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452708u;
    // 0x45270c: 0x8d860004  lw          $a2, 0x4($t4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x460CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460CF0u, 0x452708u, 0x452710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452710u;
label_452710:
    // 0x452710: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x452710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x452714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452718: 0x24631428  addiu       $v1, $v1, 0x1428
    ctx->pc = 0x452718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5160));
    // 0x45271c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452720: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x452720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x452724: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x452724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452728: 0x3e00008  jr          $ra
    ctx->pc = 0x452728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452728u;
        // 0x45272c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452730u;
}
