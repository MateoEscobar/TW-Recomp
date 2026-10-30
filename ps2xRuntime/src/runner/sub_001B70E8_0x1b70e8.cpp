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

// Function: sub_001B70E8
// Address: 0x1b70e8 - 0x1b71d8
void sub_001B70E8_0x1b70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B70E8_0x1b70e8");
#endif

    switch (ctx->pc) {
        case 0x1b7108u: goto label_1b7108;
        case 0x1b7168u: goto label_1b7168;
        default: break;
    }

    ctx->pc = 0x1b70e8u;

    // 0x1b70e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b70ec: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b70ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b70f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b70f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b70f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b70f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b70f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b70fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b70fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7100: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1B7100u;
    SET_GPR_U32(ctx, 31, 0x1B7108u);
    ctx->pc = 0x1B7104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7100u;
    // 0x1b7104: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1B7100u, 0x1B7108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7108u;
label_1b7108:
    // 0x1b7108: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b710c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x1b710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b7110: 0xc441d61c  lwc1        $f1, -0x29E4($v0)
    ctx->pc = 0x1b7110u;
    { uint32_t bits = FAST_READ32(0x50D61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7114: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b7114u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b7118: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7118u;
    {
        const bool branch_taken_0x1b7118 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7118u;
        // 0x1b711c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7118) {
            ctx->pc = 0x1B7134u;
            goto label_1b7134;
        }
    }
    ctx->pc = 0x1B7120u;
    // 0x1b7120: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7120u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7124: 0x0  nop
    ctx->pc = 0x1b7124u;
    // NOP
    // 0x1b7128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b712c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B712Cu;
    {
        const bool branch_taken_0x1b712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b712c) {
            ctx->pc = 0x1B7150u;
            goto label_1b7150;
        }
    }
    ctx->pc = 0x1B7134u;
label_1b7134:
    // 0x1b7134: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1b7134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b7138: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b713c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7144: 0x0  nop
    ctx->pc = 0x1b7144u;
    // NOP
    // 0x1b7148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b714c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b714cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b7150:
    // 0x1b7150: 0x0  nop
    ctx->pc = 0x1b7150u;
    // NOP
    // 0x1b7154: 0x0  nop
    ctx->pc = 0x1b7154u;
    // NOP
    // 0x1b7158: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b7158u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b715c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b715cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b7160: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1B7160u;
    SET_GPR_U32(ctx, 31, 0x1B7168u);
    ctx->pc = 0x1B7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7160u;
    // 0x1b7164: 0xe600010c  swc1        $f0, 0x10C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1B7160u, 0x1B7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7168u;
label_1b7168:
    // 0x1b7168: 0xc621d61c  lwc1        $f1, -0x29E4($s1)
    ctx->pc = 0x1b7168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b716c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1b716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b7170: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b7170u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b7174: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7174u;
    {
        const bool branch_taken_0x1b7174 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7174u;
        // 0x1b7178: 0x46000047  neg.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7174) {
            ctx->pc = 0x1B7190u;
            goto label_1b7190;
        }
    }
    ctx->pc = 0x1B717Cu;
    // 0x1b717c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b717cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7180: 0x0  nop
    ctx->pc = 0x1b7180u;
    // NOP
    // 0x1b7184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7188: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7188u;
    {
        const bool branch_taken_0x1b7188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7188) {
            ctx->pc = 0x1B71ACu;
            goto label_1b71ac;
        }
    }
    ctx->pc = 0x1B7190u;
label_1b7190:
    // 0x1b7190: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b7190u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b7194: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b719c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b719cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b71a0: 0x0  nop
    ctx->pc = 0x1b71a0u;
    // NOP
    // 0x1b71a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b71a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b71a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b71a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b71ac:
    // 0x1b71ac: 0x0  nop
    ctx->pc = 0x1b71acu;
    // NOP
    // 0x1b71b0: 0x0  nop
    ctx->pc = 0x1b71b0u;
    // NOP
    // 0x1b71b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b71b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b71b8: 0xe61400a0  swc1        $f20, 0xA0($s0)
    ctx->pc = 0x1b71b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1b71bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b71bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b71c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b71c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b71c4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b71c8: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1b71c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1b71cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b71ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b71d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B71D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71D0u;
        // 0x1b71d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B71D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B71D8u;
}
