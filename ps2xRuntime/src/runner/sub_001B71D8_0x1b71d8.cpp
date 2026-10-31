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

// Function: sub_001B71D8
// Address: 0x1b71d8 - 0x1b72d0
void sub_001B71D8_0x1b71d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B71D8_0x1b71d8");
#endif

    switch (ctx->pc) {
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7260u: goto label_1b7260;
        default: break;
    }

    ctx->pc = 0x1b71d8u;

    // 0x1b71d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b71d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b71dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b71dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b71e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b71e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b71e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b71ec: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b71ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b71f0: 0xc61400a0  lwc1        $f20, 0xA0($s0)
    ctx->pc = 0x1b71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b71f4: 0xae050100  sw          $a1, 0x100($s0)
    ctx->pc = 0x1b71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 5));
    // 0x1b71f8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1B71F8u;
    SET_GPR_U32(ctx, 31, 0x1B7200u);
    ctx->pc = 0x1B71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71F8u;
    // 0x1b71fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1B71F8u, 0x1B7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7200u;
label_1b7200:
    // 0x1b7200: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b7200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b7204: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x1b7204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b7208: 0xc441d61c  lwc1        $f1, -0x29E4($v0)
    ctx->pc = 0x1b7208u;
    { uint32_t bits = FAST_READ32(0x50D61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b720c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b720cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b7210: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7210u;
    {
        const bool branch_taken_0x1b7210 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7210u;
        // 0x1b7214: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7210) {
            ctx->pc = 0x1B722Cu;
            goto label_1b722c;
        }
    }
    ctx->pc = 0x1B7218u;
    // 0x1b7218: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b721c: 0x0  nop
    ctx->pc = 0x1b721cu;
    // NOP
    // 0x1b7220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7224u;
    {
        const bool branch_taken_0x1b7224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7224) {
            ctx->pc = 0x1B7248u;
            goto label_1b7248;
        }
    }
    ctx->pc = 0x1B722Cu;
label_1b722c:
    // 0x1b722c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1b722cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b7230: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b7230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b7234: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b723c: 0x0  nop
    ctx->pc = 0x1b723cu;
    // NOP
    // 0x1b7240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b7244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b7248:
    // 0x1b7248: 0x0  nop
    ctx->pc = 0x1b7248u;
    // NOP
    // 0x1b724c: 0x0  nop
    ctx->pc = 0x1b724cu;
    // NOP
    // 0x1b7250: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b7250u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b7254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b7254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b7258: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1B7258u;
    SET_GPR_U32(ctx, 31, 0x1B7260u);
    ctx->pc = 0x1B725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7258u;
    // 0x1b725c: 0xe600010c  swc1        $f0, 0x10C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1B7258u, 0x1B7260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7260u;
label_1b7260:
    // 0x1b7260: 0xc621d61c  lwc1        $f1, -0x29E4($s1)
    ctx->pc = 0x1b7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7264: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1b7264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b7268: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b7268u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b726c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B726Cu;
    {
        const bool branch_taken_0x1b726c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B726Cu;
        // 0x1b7270: 0x46000047  neg.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b726c) {
            ctx->pc = 0x1B7288u;
            goto label_1b7288;
        }
    }
    ctx->pc = 0x1B7274u;
    // 0x1b7274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7278: 0x0  nop
    ctx->pc = 0x1b7278u;
    // NOP
    // 0x1b727c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b727cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7280: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7280u;
    {
        const bool branch_taken_0x1b7280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7280) {
            ctx->pc = 0x1B72A4u;
            goto label_1b72a4;
        }
    }
    ctx->pc = 0x1B7288u;
label_1b7288:
    // 0x1b7288: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b7288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b728c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7298: 0x0  nop
    ctx->pc = 0x1b7298u;
    // NOP
    // 0x1b729c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b729cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b72a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b72a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b72a4:
    // 0x1b72a4: 0x0  nop
    ctx->pc = 0x1b72a4u;
    // NOP
    // 0x1b72a8: 0x0  nop
    ctx->pc = 0x1b72a8u;
    // NOP
    // 0x1b72ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b72acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b72b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b72b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b72b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b72b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b72b8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b72bc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1b72bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1b72c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b72c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b72c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72C4u;
        // 0x1b72c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72CCu;
    // 0x1b72cc: 0x0  nop
    ctx->pc = 0x1b72ccu;
    // NOP
    ctx->pc = 0x1b72d0u;
}
