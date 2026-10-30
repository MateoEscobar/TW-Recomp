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

// Function: sub_001CD1E0
// Address: 0x1cd1e0 - 0x1cd280
void sub_001CD1E0_0x1cd1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD1E0_0x1cd1e0");
#endif

    switch (ctx->pc) {
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd218u: goto label_1cd218;
        case 0x1cd228u: goto label_1cd228;
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd260u: goto label_1cd260;
        default: break;
    }

    ctx->pc = 0x1cd1e0u;

    // 0x1cd1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd1e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cd1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cd1e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cd1ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cd1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cd1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cd1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd1fc: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CD1FCu;
    SET_GPR_U32(ctx, 31, 0x1CD204u);
    ctx->pc = 0x1CD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1FCu;
    // 0x1cd200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CD1FCu, 0x1CD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD204u;
label_1cd204:
    // 0x1cd204: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x1cd204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1cd208: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cd20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd210: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CD210u;
    SET_GPR_U32(ctx, 31, 0x1CD218u);
    ctx->pc = 0x1CD214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD210u;
    // 0x1cd214: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CD210u, 0x1CD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD218u;
label_1cd218:
    // 0x1cd218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd21c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cd21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd220: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1CD220u;
    SET_GPR_U32(ctx, 31, 0x1CD228u);
    ctx->pc = 0x1CD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD220u;
    // 0x1cd224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CD220u, 0x1CD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD228u;
label_1cd228:
    // 0x1cd228: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x1cd228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd22c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd230: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd234: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd238: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1CD238u;
    SET_GPR_U32(ctx, 31, 0x1CD240u);
    ctx->pc = 0x1CD23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD238u;
    // 0x1cd23c: 0xe60000b4  swc1        $f0, 0xB4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CD238u, 0x1CD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD240u;
label_1cd240:
    // 0x1cd240: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x1cd240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cd244: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1cd248: 0x8e0800a0  lw          $t0, 0xA0($s0)
    ctx->pc = 0x1cd248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1cd24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd250: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x1cd254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd258: 0xc05e656  jal         func_179958
    ctx->pc = 0x1CD258u;
    SET_GPR_U32(ctx, 31, 0x1CD260u);
    ctx->pc = 0x1CD25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD258u;
    // 0x1cd25c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179958u, 0x1CD258u, 0x1CD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD260u;
label_1cd260:
    // 0x1cd260: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x1cd260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1cd264: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cd264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cd268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd26c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cd26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd274: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD274u;
        // 0x1cd278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD27Cu;
    // 0x1cd27c: 0x0  nop
    ctx->pc = 0x1cd27cu;
    // NOP
    ctx->pc = 0x1cd280u;
}
