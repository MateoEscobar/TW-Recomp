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

// Function: sub_001F7238
// Address: 0x1f7238 - 0x1f7308
void sub_001F7238_0x1f7238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7238_0x1f7238");
#endif

    switch (ctx->pc) {
        case 0x1f726cu: goto label_1f726c;
        case 0x1f7278u: goto label_1f7278;
        case 0x1f728cu: goto label_1f728c;
        case 0x1f72acu: goto label_1f72ac;
        default: break;
    }

    ctx->pc = 0x1f7238u;

    // 0x1f7238: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f7238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f723c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f7240: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f7240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7244: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f7244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f7248: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f7248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1f724c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f7250: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f7250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7254: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f7254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f7258: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1f725c: 0x2484ef80  addiu       $a0, $a0, -0x1080
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    // 0x1f7260: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7264: 0xc080b0c  jal         func_202C30
    ctx->pc = 0x1F7264u;
    SET_GPR_U32(ctx, 31, 0x1F726Cu);
    ctx->pc = 0x1F7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7264u;
    // 0x1f7268: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F7264u, 0x1F726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F726Cu;
label_1f726c:
    // 0x1f726c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f726cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7270: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1f7270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7274: 0x0  nop
    ctx->pc = 0x1f7274u;
    // NOP
label_1f7278:
    // 0x1f7278: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f727c: 0x2664ef80  addiu       $a0, $s3, -0x1080
    ctx->pc = 0x1f727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963072));
    // 0x1f7280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f7280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7284: 0xc080b38  jal         func_202CE0
    ctx->pc = 0x1F7284u;
    SET_GPR_U32(ctx, 31, 0x1F728Cu);
    ctx->pc = 0x1F7288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7284u;
    // 0x1f7288: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x1F7284u, 0x1F728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F728Cu;
label_1f728c:
    // 0x1f728c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f728cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f7290: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1f7290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f7294: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7294u;
    {
        const bool branch_taken_0x1f7294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7294u;
        // 0x1f7298: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7294) {
            ctx->pc = 0x1F7278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7278;
        }
    }
    ctx->pc = 0x1F729Cu;
    // 0x1f729c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f72a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72a4: 0xc07f8f4  jal         func_1FE3D0
    ctx->pc = 0x1F72A4u;
    SET_GPR_U32(ctx, 31, 0x1F72ACu);
    ctx->pc = 0x1F72A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F72A4u;
    // 0x1f72a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE3D0u, 0x1F72A4u, 0x1F72ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F72ACu;
label_1f72ac:
    // 0x1f72ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f72acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72b0: 0x0  nop
    ctx->pc = 0x1f72b0u;
    // NOP
    // 0x1f72b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f72b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f72b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1f72bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f72bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1f72c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f72c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f72c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f72c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f72c8: 0x8e8200ac  lw          $v0, 0xAC($s4)
    ctx->pc = 0x1f72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x1f72cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f72ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f72d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f72d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f72d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f72d8: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1f72d8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1f72dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f72dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f72e0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1f72e0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1f72e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f72e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f72e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f72e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f72ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f72ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f72f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f72f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f72f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f72f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72f8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1f72f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1f72fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F72FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72FCu;
        // 0x1f7300: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F72FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7304u;
    // 0x1f7304: 0x0  nop
    ctx->pc = 0x1f7304u;
    // NOP
    ctx->pc = 0x1f7308u;
}
