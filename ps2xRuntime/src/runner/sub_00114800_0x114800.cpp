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

// Function: sub_00114800
// Address: 0x114800 - 0x1148e8
void sub_00114800_0x114800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114800_0x114800");
#endif

    ctx->pc = 0x114800u;

    // 0x114800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114808: 0x2ca200a2  sltiu       $v0, $a1, 0xA2
    ctx->pc = 0x114808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)162) ? 1 : 0);
    // 0x11480c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x11480cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x114810: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x114810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x114814: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x114814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x114818: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x114818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x11481c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x11481cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x114820: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x114820u;
    {
        const bool branch_taken_0x114820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114820u;
        // 0x114824: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114820) {
            ctx->pc = 0x1148E0u;
            goto label_1148e0;
        }
    }
    ctx->pc = 0x114828u;
    // 0x114828: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x114828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11482c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11482cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114830: 0x34423a3c  ori         $v0, $v0, 0x3A3C
    ctx->pc = 0x114830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14908);
    // 0x114834: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11483c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11483cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114840: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x114840u;
    {
        const bool branch_taken_0x114840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x114840) {
            ctx->pc = 0x1148E0u;
            goto label_1148e0;
        }
    }
    ctx->pc = 0x114848u;
    // 0x114848: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x114848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11484c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x11484Cu;
    {
        const bool branch_taken_0x11484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11484c) {
            ctx->pc = 0x1148E0u;
            goto label_1148e0;
        }
    }
    ctx->pc = 0x114854u;
    // 0x114854: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x114854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x114858: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11485c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11485cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114860: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x114860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x114864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x114864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114868: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x114868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x11486c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x11486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x114870: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x114870u;
    {
        const bool branch_taken_0x114870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114870) {
            ctx->pc = 0x114874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114870u;
            // 0x114874: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114890u;
            goto label_114890;
        }
    }
    ctx->pc = 0x114878u;
    // 0x114878: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x114878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x11487c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x114884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114888: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x114888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x11488c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x11488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_114890:
    // 0x114890: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x114890u;
    {
        const bool branch_taken_0x114890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114890) {
            ctx->pc = 0x114894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114890u;
            // 0x114894: 0x90a20001  lbu         $v0, 0x1($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148B0u;
            goto label_1148b0;
        }
    }
    ctx->pc = 0x114898u;
    // 0x114898: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x114898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x11489c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1148a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1148a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1148a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1148a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1148a8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1148a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1148ac: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1148acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1148b0:
    // 0x1148b0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1148b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1148b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1148b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1148b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1148b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1148bc: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1148BCu;
    {
        const bool branch_taken_0x1148bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148BCu;
        // 0x1148c0: 0xa0a20001  sb          $v0, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148bc) {
            ctx->pc = 0x1148C8u;
            goto label_1148c8;
        }
    }
    ctx->pc = 0x1148C4u;
    // 0x1148c4: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1148c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_1148c8:
    // 0x1148c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1148c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1148cc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1148ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1148d0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1148d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1148d4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1148d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1148d8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1148d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1148dc: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1148dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1148e0:
    // 0x1148e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1148E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1148E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1148E8u;
}
