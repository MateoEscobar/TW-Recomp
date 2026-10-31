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

// Function: sub_00469178
// Address: 0x469178 - 0x4692d8
void sub_00469178_0x469178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469178_0x469178");
#endif

    switch (ctx->pc) {
        case 0x4691a8u: goto label_4691a8;
        case 0x4691b0u: goto label_4691b0;
        case 0x4691d4u: goto label_4691d4;
        case 0x4691e8u: goto label_4691e8;
        default: break;
    }

    ctx->pc = 0x469178u;

    // 0x469178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x469178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46917c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x46917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x469180: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x469180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x469184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x469184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x469188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x46918c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469190: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x469190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x469194: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x469194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x469198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x469198u;
    {
        const bool branch_taken_0x469198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469198u;
        // 0x46919c: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469198) {
            ctx->pc = 0x4691A8u;
            goto label_4691a8;
        }
    }
    ctx->pc = 0x4691A0u;
    // 0x4691a0: 0xc11a402  jal         func_469008
    ctx->pc = 0x4691A0u;
    SET_GPR_U32(ctx, 31, 0x4691A8u);
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x4691A0u, 0x4691A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691A8u;
label_4691a8:
    // 0x4691a8: 0xc1210c0  jal         func_484300
    ctx->pc = 0x4691A8u;
    SET_GPR_U32(ctx, 31, 0x4691B0u);
    ctx->pc = 0x4691ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4691A8u;
    // 0x4691ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484300u, 0x4691A8u, 0x4691B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691B0u;
label_4691b0:
    // 0x4691b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4691B0u;
    {
        const bool branch_taken_0x4691b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4691b0) {
            ctx->pc = 0x4691B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4691B0u;
            // 0x4691b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4691CCu;
            goto label_4691cc;
        }
    }
    ctx->pc = 0x4691B8u;
    // 0x4691b8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x4691b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x4691bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4691bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4691c0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4691C0u;
    {
        const bool branch_taken_0x4691c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4691C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4691C0u;
        // 0x4691c4: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4691c0) {
            ctx->pc = 0x4692BCu;
            goto label_4692bc;
        }
    }
    ctx->pc = 0x4691C8u;
    // 0x4691c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4691c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4691cc:
    // 0x4691cc: 0xc12104a  jal         func_484128
    ctx->pc = 0x4691CCu;
    SET_GPR_U32(ctx, 31, 0x4691D4u);
    ctx->pc = 0x4691D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4691CCu;
    // 0x4691d0: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4691CCu, 0x4691D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691D4u;
label_4691d4:
    // 0x4691d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4691d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4691d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4691d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4691dc: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x4691dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x4691e0: 0xc120042  jal         func_480108
    ctx->pc = 0x4691E0u;
    SET_GPR_U32(ctx, 31, 0x4691E8u);
    ctx->pc = 0x4691E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4691E0u;
    // 0x4691e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480108u, 0x4691E0u, 0x4691E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4691E8u;
label_4691e8:
    // 0x4691e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4691e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4691ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4691ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4691f0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x4691f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x4691f4: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4691F4u;
    {
        const bool branch_taken_0x4691f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4691F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4691F4u;
        // 0x4691f8: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4691f4) {
            ctx->pc = 0x4692A8u;
            goto label_4692a8;
        }
    }
    ctx->pc = 0x4691FCu;
    // 0x4691fc: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x4691fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x469200: 0xc6270020  lwc1        $f7, 0x20($s1)
    ctx->pc = 0x469200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x469204: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x469204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x469208: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x469208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46920c: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x46920cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x469210: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x469210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x469214: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x469214u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x469218: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x469218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x46921c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x46921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x469220: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x469220u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x469224: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x469224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x469228: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x469228u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x46922c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x46922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x469230: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x469230u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x469234: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x469234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x469238: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x469238u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x46923c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x46923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x469240: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x469240u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x469244: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x469244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x469248: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x469248u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x46924c: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x46924cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x469250: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x469250u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x469254: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x469254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x469258: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x469258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x46925c: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x46925cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x469260: 0x0  nop
    ctx->pc = 0x469260u;
    // NOP
    // 0x469264: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x469264u;
    {
        const bool branch_taken_0x469264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x469268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469264u;
        // 0x469268: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x469264) {
            ctx->pc = 0x469278u;
            goto label_469278;
        }
    }
    ctx->pc = 0x46926Cu;
    // 0x46926c: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x46926cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x469270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x469270u;
    {
        const bool branch_taken_0x469270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469270) {
            ctx->pc = 0x46927Cu;
            goto label_46927c;
        }
    }
    ctx->pc = 0x469278u;
label_469278:
    // 0x469278: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x469278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46927c:
    // 0x46927c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x46927Cu;
    {
        const bool branch_taken_0x46927c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x46927c) {
            ctx->pc = 0x469298u;
            goto label_469298;
        }
    }
    ctx->pc = 0x469284u;
    // 0x469284: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x469284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x469288: 0x0  nop
    ctx->pc = 0x469288u;
    // NOP
    // 0x46928c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x46928Cu;
    {
        const bool branch_taken_0x46928c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x469290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46928Cu;
        // 0x469290: 0x46003846  mov.s       $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46928c) {
            ctx->pc = 0x469298u;
            goto label_469298;
        }
    }
    ctx->pc = 0x469294u;
    // 0x469294: 0x46003046  mov.s       $f1, $f6
    ctx->pc = 0x469294u;
    ctx->f[1] = FPU_MOV_S(ctx->f[6]);
label_469298:
    // 0x469298: 0x46010044  c1          0x10044
    ctx->pc = 0x469298u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x46929c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x46929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4692a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4692A0u;
    {
        const bool branch_taken_0x4692a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4692A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4692A0u;
        // 0x4692a4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4692a0) {
            ctx->pc = 0x4692ACu;
            goto label_4692ac;
        }
    }
    ctx->pc = 0x4692A8u;
label_4692a8:
    // 0x4692a8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x4692a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4692ac:
    // 0x4692ac: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x4692acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x4692b0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x4692b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x4692b4: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x4692b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x4692b8: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x4692b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_4692bc:
    // 0x4692bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4692bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4692c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4692c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4692c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4692c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4692c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4692c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4692cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4692ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4692d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4692D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4692D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4692D0u;
        // 0x4692d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4692D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4692D8u;
}
