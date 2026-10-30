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

// Function: sub_001CE8B8
// Address: 0x1ce8b8 - 0x1ce9a8
void sub_001CE8B8_0x1ce8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE8B8_0x1ce8b8");
#endif

    switch (ctx->pc) {
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce938u: goto label_1ce938;
        case 0x1ce95cu: goto label_1ce95c;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce994u: goto label_1ce994;
        default: break;
    }

    ctx->pc = 0x1ce8b8u;

    // 0x1ce8b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce8bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce8c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ce8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ce8c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce8cc: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1ce8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1ce8d0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CE8D0u;
    {
        const bool branch_taken_0x1ce8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D0u;
        // 0x1ce8d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8d0) {
            ctx->pc = 0x1CE994u;
            goto label_1ce994;
        }
    }
    ctx->pc = 0x1CE8D8u;
    // 0x1ce8d8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1ce8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1ce8dc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1ce8dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x1ce8e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce8e4: 0x9044ebd4  lbu         $a0, -0x142C($v0)
    ctx->pc = 0x1ce8e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962132)));
    // 0x1ce8e8: 0x263002a0  addiu       $s0, $s1, 0x2A0
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1ce8ec: 0x922301b0  lbu         $v1, 0x1B0($s1)
    ctx->pc = 0x1ce8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x1ce8f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ce8f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce8f4: 0x0  nop
    ctx->pc = 0x1ce8f4u;
    // NOP
    // 0x1ce8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ce8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ce8fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ce8fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce900: 0x0  nop
    ctx->pc = 0x1ce900u;
    // NOP
    // 0x1ce904: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ce904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ce908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce90c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce910: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ce910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ce914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ce918: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ce918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ce91c: 0xc06898e  jal         func_1A2638
    ctx->pc = 0x1CE91Cu;
    SET_GPR_U32(ctx, 31, 0x1CE924u);
    ctx->pc = 0x1CE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE91Cu;
    // 0x1ce920: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1CE91Cu, 0x1CE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE924u;
label_1ce924:
    // 0x1ce924: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1CE924u;
    SET_GPR_U32(ctx, 31, 0x1CE92Cu);
    ctx->pc = 0x1CE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE924u;
    // 0x1ce928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CE924u, 0x1CE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE92Cu;
label_1ce92c:
    // 0x1ce92c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ce930: 0xc06c590  jal         func_1B1640
    ctx->pc = 0x1CE930u;
    SET_GPR_U32(ctx, 31, 0x1CE938u);
    ctx->pc = 0x1CE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE930u;
    // 0x1ce934: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1CE930u, 0x1CE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE938u;
label_1ce938:
    // 0x1ce938: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE938u;
    {
        const bool branch_taken_0x1ce938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE938u;
        // 0x1ce93c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce938) {
            ctx->pc = 0x1CE964u;
            goto label_1ce964;
        }
    }
    ctx->pc = 0x1CE940u;
    // 0x1ce940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce944: 0xc44cebd0  lwc1        $f12, -0x1430($v0)
    ctx->pc = 0x1ce944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce94c: 0xae2301b8  sw          $v1, 0x1B8($s1)
    ctx->pc = 0x1ce94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 3));
    // 0x1ce950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ce950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce954: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1CE954u;
    SET_GPR_U32(ctx, 31, 0x1CE95Cu);
    ctx->pc = 0x1CE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE954u;
    // 0x1ce958: 0xae230188  sw          $v1, 0x188($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1CE954u, 0x1CE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE95Cu;
label_1ce95c:
    // 0x1ce95c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CE95Cu;
    {
        const bool branch_taken_0x1ce95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE95Cu;
        // 0x1ce960: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce95c) {
            ctx->pc = 0x1CE988u;
            goto label_1ce988;
        }
    }
    ctx->pc = 0x1CE964u;
label_1ce964:
    // 0x1ce964: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ce964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ce968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce96c: 0xc44cebd8  lwc1        $f12, -0x1428($v0)
    ctx->pc = 0x1ce96cu;
    { uint32_t bits = FAST_READ32(0x50EBD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce974: 0xae2301b8  sw          $v1, 0x1B8($s1)
    ctx->pc = 0x1ce974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 3));
    // 0x1ce978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce97c: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1CE97Cu;
    SET_GPR_U32(ctx, 31, 0x1CE984u);
    ctx->pc = 0x1CE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE97Cu;
    // 0x1ce980: 0xae230188  sw          $v1, 0x188($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1CE97Cu, 0x1CE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE984u;
label_1ce984:
    // 0x1ce984: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ce988:
    // 0x1ce988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce98c: 0xc06ec0e  jal         func_1BB038
    ctx->pc = 0x1CE98Cu;
    SET_GPR_U32(ctx, 31, 0x1CE994u);
    ctx->pc = 0x1CE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE98Cu;
    // 0x1ce990: 0x8c45d310  lw          $a1, -0x2CF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1CE98Cu, 0x1CE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE994u;
label_1ce994:
    // 0x1ce994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ce994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ce998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9A0u;
        // 0x1ce9a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE9A8u;
}
