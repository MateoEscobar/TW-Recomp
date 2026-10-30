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

// Function: sub_00223188
// Address: 0x223188 - 0x223260
void sub_00223188_0x223188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223188_0x223188");
#endif

    switch (ctx->pc) {
        case 0x22319cu: goto label_22319c;
        case 0x2231c0u: goto label_2231c0;
        case 0x2231d0u: goto label_2231d0;
        default: break;
    }

    ctx->pc = 0x223188u;

    // 0x223188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22318c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223194: 0xc088ade  jal         func_222B78
    ctx->pc = 0x223194u;
    SET_GPR_U32(ctx, 31, 0x22319Cu);
    ctx->pc = 0x223198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223194u;
    // 0x223198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x223194u, 0x22319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22319Cu;
label_22319c:
    // 0x22319c: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x22319cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2231a0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2231a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2231a4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2231A4u;
    {
        const bool branch_taken_0x2231a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231A4u;
        // 0x2231a8: 0x8450002c  lh          $s0, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a4) {
            ctx->pc = 0x223248u;
            goto label_223248;
        }
    }
    ctx->pc = 0x2231ACu;
    // 0x2231ac: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2231acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2231b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2231b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2231b4: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x2231b8: 0xc10904c  jal         func_424130
    ctx->pc = 0x2231B8u;
    SET_GPR_U32(ctx, 31, 0x2231C0u);
    ctx->pc = 0x2231BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231B8u;
    // 0x2231bc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x2231B8u, 0x2231C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231C0u;
label_2231c0:
    // 0x2231c0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2231C0u;
    {
        const bool branch_taken_0x2231c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231C0u;
        // 0x2231c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231c0) {
            ctx->pc = 0x22324Cu;
            goto label_22324c;
        }
    }
    ctx->pc = 0x2231C8u;
    // 0x2231c8: 0xc08a218  jal         func_228860
    ctx->pc = 0x2231C8u;
    SET_GPR_U32(ctx, 31, 0x2231D0u);
    ctx->pc = 0x228860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228860u, 0x2231C8u, 0x2231D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231D0u;
label_2231d0:
    // 0x2231d0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2231d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2231d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2231D4u;
    {
        const bool branch_taken_0x2231d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2231D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231D4u;
        // 0x2231d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231d4) {
            ctx->pc = 0x2231F0u;
            goto label_2231f0;
        }
    }
    ctx->pc = 0x2231DCu;
    // 0x2231dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2231dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2231e0: 0x0  nop
    ctx->pc = 0x2231e0u;
    // NOP
    // 0x2231e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2231e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2231e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2231E8u;
    {
        const bool branch_taken_0x2231e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2231e8) {
            ctx->pc = 0x223208u;
            goto label_223208;
        }
    }
    ctx->pc = 0x2231F0u;
label_2231f0:
    // 0x2231f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2231f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2231f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2231f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2231f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2231f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2231fc: 0x0  nop
    ctx->pc = 0x2231fcu;
    // NOP
    // 0x223200: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x223200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x223204: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x223204u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_223208:
    // 0x223208: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x223208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x22320c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22320cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x223210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223214: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x223214u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223218: 0x0  nop
    ctx->pc = 0x223218u;
    // NOP
    // 0x22321c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22321cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x223220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223224: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x223224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223228: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x223228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22322c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223230: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x223230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x223234: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x223234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x223238: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x223238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22323c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x22323cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x223240: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x223244: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x223244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_223248:
    // 0x223248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22324c:
    // 0x22324c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223254: 0x3e00008  jr          $ra
    ctx->pc = 0x223254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223254u;
        // 0x223258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22325Cu;
    // 0x22325c: 0x0  nop
    ctx->pc = 0x22325cu;
    // NOP
    ctx->pc = 0x223260u;
}
