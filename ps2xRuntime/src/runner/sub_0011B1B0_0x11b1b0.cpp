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

// Function: sub_0011B1B0
// Address: 0x11b1b0 - 0x11b298
void sub_0011B1B0_0x11b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B1B0_0x11b1b0");
#endif

    switch (ctx->pc) {
        case 0x11b244u: goto label_11b244;
        default: break;
    }

    ctx->pc = 0x11b1b0u;

    // 0x11b1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b1b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11b1b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11b1bc: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x11b1bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11b1c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11b1c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b1cc: 0x16450006  bne         $s2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B1CCu;
    {
        const bool branch_taken_0x11b1cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x11B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1CCu;
        // 0x11b1d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1cc) {
            ctx->pc = 0x11B1E8u;
            goto label_11b1e8;
        }
    }
    ctx->pc = 0x11B1D4u;
    // 0x11b1d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11b1d8: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x11b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x11b1dc: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x11b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x11b1e0: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x11b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x11b1e4: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x11b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
label_11b1e8:
    // 0x11b1e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b1ec: 0x56420023  bnel        $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11B1ECu;
    {
        const bool branch_taken_0x11b1ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11b1ec) {
            ctx->pc = 0x11B1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B1ECu;
            // 0x11b1f0: 0xa232007c  sb          $s2, 0x7C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B27Cu;
            goto label_11b27c;
        }
    }
    ctx->pc = 0x11B1F4u;
    // 0x11b1f4: 0x9222007c  lbu         $v0, 0x7C($s1)
    ctx->pc = 0x11b1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x11b1f8: 0x14450019  bne         $v0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11B1F8u;
    {
        const bool branch_taken_0x11b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1F8u;
        // 0x11b1fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1f8) {
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B200u;
    // 0x11b200: 0x8e300084  lw          $s0, 0x84($s1)
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x11b204: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B204u;
    {
        const bool branch_taken_0x11b204 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B204u;
        // 0x11b208: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b204) {
            ctx->pc = 0x11B220u;
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B20Cu;
    // 0x11b20c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x11b20cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b210: 0x0  nop
    ctx->pc = 0x11b210u;
    // NOP
    // 0x11b214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11b214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11b218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B218u;
    {
        const bool branch_taken_0x11b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B218u;
        // 0x11b21c: 0xc62c0078  lwc1        $f12, 0x78($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b218) {
            ctx->pc = 0x11B23Cu;
            goto label_11b23c;
        }
    }
    ctx->pc = 0x11B220u;
label_11b220:
    // 0x11b220: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x11b220u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x11b224: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11b224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11b228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b22c: 0x0  nop
    ctx->pc = 0x11b22cu;
    // NOP
    // 0x11b230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11b230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11b234: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11b234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11b238: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x11b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11b23c:
    // 0x11b23c: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x11B23Cu;
    SET_GPR_U32(ctx, 31, 0x11B244u);
    ctx->pc = 0x11B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B23Cu;
    // 0x11b240: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x11B23Cu, 0x11B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B244u;
label_11b244:
    // 0x11b244: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x11b244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x11b248: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x11b248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11b24c: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x11b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x11b250: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x11b250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x11b254: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11b254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B258u;
    {
        const bool branch_taken_0x11b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B258u;
        // 0x11b25c: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b258) {
            ctx->pc = 0x11B278u;
            goto label_11b278;
        }
    }
    ctx->pc = 0x11B260u;
label_11b260:
    // 0x11b260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b268: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x11b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x11b26c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x11b26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x11b270: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x11b274: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x11b274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_11b278:
    // 0x11b278: 0xa232007c  sb          $s2, 0x7C($s1)
    ctx->pc = 0x11b278u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 18));
label_11b27c:
    // 0x11b27c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b280: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11b280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b284: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11b284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b28c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B28Cu;
        // 0x11b290: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B294u;
    // 0x11b294: 0x0  nop
    ctx->pc = 0x11b294u;
    // NOP
    ctx->pc = 0x11b298u;
}
