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

// Function: sub_00252410
// Address: 0x252410 - 0x252ae0
void sub_00252410_0x252410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252410_0x252410");
#endif

    switch (ctx->pc) {
        case 0x252474u: goto label_252474;
        case 0x25248cu: goto label_25248c;
        case 0x2524c0u: goto label_2524c0;
        case 0x2524f8u: goto label_2524f8;
        case 0x252530u: goto label_252530;
        case 0x252568u: goto label_252568;
        case 0x252598u: goto label_252598;
        case 0x2525d8u: goto label_2525d8;
        case 0x252648u: goto label_252648;
        case 0x252650u: goto label_252650;
        case 0x25265cu: goto label_25265c;
        case 0x2526a0u: goto label_2526a0;
        case 0x252768u: goto label_252768;
        case 0x252778u: goto label_252778;
        case 0x2527d8u: goto label_2527d8;
        case 0x252820u: goto label_252820;
        case 0x2529b0u: goto label_2529b0;
        case 0x2529f0u: goto label_2529f0;
        case 0x252a60u: goto label_252a60;
        case 0x252a84u: goto label_252a84;
        case 0x252a94u: goto label_252a94;
        default: break;
    }

    ctx->pc = 0x252410u;

    // 0x252410: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x252410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x252414: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x252414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x252418: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x252418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25241c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25241cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252420: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x252420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x252424: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x252424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x252428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25242c: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x25242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x252430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x252430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252434: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x252434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x252438: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x252438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25243c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x25243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x252440: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x252440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x252444: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x252444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x252448: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x252448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x25244c: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x25244cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x252450: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x252450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x252454: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x252458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25245c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x25245cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252460: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x252460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x252464: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x252464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25246c: 0xc0d3e8a  jal         func_34FA28
    ctx->pc = 0x25246Cu;
    SET_GPR_U32(ctx, 31, 0x252474u);
    ctx->pc = 0x252470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25246Cu;
    // 0x252470: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FA28u, 0x25246Cu, 0x252474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252474u;
label_252474:
    // 0x252474: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x252474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x252478: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x252478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25247c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25247Cu;
    {
        const bool branch_taken_0x25247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25247Cu;
        // 0x252480: 0xac60a22c  sw          $zero, -0x5DD4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25247c) {
            ctx->pc = 0x2524A8u;
            goto label_2524a8;
        }
    }
    ctx->pc = 0x252484u;
    // 0x252484: 0xc0941c2  jal         func_250708
    ctx->pc = 0x252484u;
    SET_GPR_U32(ctx, 31, 0x25248Cu);
    ctx->pc = 0x252488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252484u;
    // 0x252488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x252484u, 0x25248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25248Cu;
label_25248c:
    // 0x25248c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x252490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252490u;
    {
        const bool branch_taken_0x252490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252490u;
        // 0x252494: 0xac62c450  sw          $v0, -0x3BB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252490) {
            ctx->pc = 0x2524A8u;
            goto label_2524a8;
        }
    }
    ctx->pc = 0x252498u;
    // 0x252498: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x252498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25249c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2524a0: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x2524A0u;
    {
        const bool branch_taken_0x2524a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524A0u;
        // 0x2524a4: 0x7ea30000  sq          $v1, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524a0) {
            ctx->pc = 0x252AB0u;
            goto label_252ab0;
        }
    }
    ctx->pc = 0x2524A8u;
label_2524a8:
    // 0x2524a8: 0x8e31a22c  lw          $s1, -0x5DD4($s1)
    ctx->pc = 0x2524a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943276)));
    // 0x2524ac: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2524ACu;
    {
        const bool branch_taken_0x2524ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2524B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524ACu;
        // 0x2524b0: 0x3c03006d  lui         $v1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524ac) {
            ctx->pc = 0x2524C8u;
            goto label_2524c8;
        }
    }
    ctx->pc = 0x2524B4u;
    // 0x2524b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2524b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524b8: 0xc094842  jal         func_252108
    ctx->pc = 0x2524B8u;
    SET_GPR_U32(ctx, 31, 0x2524C0u);
    ctx->pc = 0x2524BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524B8u;
    // 0x2524bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252108u, 0x2524B8u, 0x2524C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524C0u;
label_2524c0:
    // 0x2524c0: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x2524C0u;
    {
        const bool branch_taken_0x2524c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524C0u;
        // 0x2524c4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524c0) {
            ctx->pc = 0x252AB0u;
            goto label_252ab0;
        }
    }
    ctx->pc = 0x2524C8u;
label_2524c8:
    // 0x2524c8: 0x8c62a230  lw          $v0, -0x5DD0($v1)
    ctx->pc = 0x2524c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943280)));
    // 0x2524cc: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2524CCu;
    {
        const bool branch_taken_0x2524cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2524D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524CCu;
        // 0x2524d0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524cc) {
            ctx->pc = 0x252798u;
            goto label_252798;
        }
    }
    ctx->pc = 0x2524D4u;
    // 0x2524d4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x2524d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x2524d8: 0x34213c00  ori         $at, $at, 0x3C00
    ctx->pc = 0x2524d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15360);
    // 0x2524dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2524dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2524e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2524e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524e4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2524e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2524e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2524e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2524ec: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2524ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x2524f0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2524f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2524f4: 0x0  nop
    ctx->pc = 0x2524f4u;
    // NOP
label_2524f8:
    // 0x2524f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2524f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2524fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2524fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x252500: 0x0  nop
    ctx->pc = 0x252500u;
    // NOP
    // 0x252504: 0x0  nop
    ctx->pc = 0x252504u;
    // NOP
    // 0x252508: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x252508u;
    {
        const bool branch_taken_0x252508 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252508u;
        // 0x25250c: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252508) {
            ctx->pc = 0x2524F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2524f8;
        }
    }
    ctx->pc = 0x252510u;
    // 0x252510: 0x122000a2  beqz        $s1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x252510u;
    {
        const bool branch_taken_0x252510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252510u;
        // 0x252514: 0x8ec3a230  lw          $v1, -0x5DD0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252510) {
            ctx->pc = 0x25279Cu;
            goto label_25279c;
        }
    }
    ctx->pc = 0x252518u;
    // 0x252518: 0x86300000  lh          $s0, 0x0($s1)
    ctx->pc = 0x252518u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25251c: 0x1a000041  blez        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x25251Cu;
    {
        const bool branch_taken_0x25251c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x252520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25251Cu;
        // 0x252520: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25251c) {
            ctx->pc = 0x252624u;
            goto label_252624;
        }
    }
    ctx->pc = 0x252524u;
    // 0x252524: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x252524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252528: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x252528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25252c: 0x0  nop
    ctx->pc = 0x25252cu;
    // NOP
label_252530:
    // 0x252530: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x252530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x252534: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x252534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x252538: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x252538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25253c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x25253cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x252540: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x252540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x252544: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252544u;
    {
        const bool branch_taken_0x252544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252544) {
            ctx->pc = 0x252548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252544u;
            // 0x252548: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25254Cu;
            goto label_25254c;
        }
    }
    ctx->pc = 0x25254Cu;
label_25254c:
    // 0x25254c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x25254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x252550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x252550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252554: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x252554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x252558: 0x3010  mfhi        $a2
    ctx->pc = 0x252558u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x25255c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x25255cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x252560: 0xc0940e6  jal         func_250398
    ctx->pc = 0x252560u;
    SET_GPR_U32(ctx, 31, 0x252568u);
    ctx->pc = 0x252564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252560u;
    // 0x252564: 0x1063021  addu        $a2, $t0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250398u, 0x252560u, 0x252568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252568u;
label_252568:
    // 0x252568: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x252568u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25256c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x25256cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252570: 0x0  nop
    ctx->pc = 0x252570u;
    // NOP
    // 0x252574: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x252574u;
    {
        const bool branch_taken_0x252574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252574u;
        // 0x252578: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252574) {
            ctx->pc = 0x252618u;
            goto label_252618;
        }
    }
    ctx->pc = 0x25257Cu;
    // 0x25257c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25257cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252580: 0x0  nop
    ctx->pc = 0x252580u;
    // NOP
    // 0x252584: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x252584u;
    {
        const bool branch_taken_0x252584 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252584u;
        // 0x252588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252584) {
            ctx->pc = 0x2525B8u;
            goto label_2525b8;
        }
    }
    ctx->pc = 0x25258Cu;
    // 0x25258c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25258cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252590: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x252594: 0x0  nop
    ctx->pc = 0x252594u;
    // NOP
label_252598:
    // 0x252598: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x252598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25259c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25259Cu;
    {
        const bool branch_taken_0x25259c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25259Cu;
        // 0x2525a0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25259c) {
            ctx->pc = 0x252618u;
            goto label_252618;
        }
    }
    ctx->pc = 0x2525A4u;
    // 0x2525a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2525a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2525a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525ac: 0x0  nop
    ctx->pc = 0x2525acu;
    // NOP
    // 0x2525b0: 0x4502fff9  bc1fl       . + 4 + (-0x7 << 2)
    ctx->pc = 0x2525B0u;
    {
        const bool branch_taken_0x2525b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2525b0) {
            ctx->pc = 0x2525B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2525B0u;
            // 0x2525b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252598;
        }
    }
    ctx->pc = 0x2525B8u;
label_2525b8:
    // 0x2525b8: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2525b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2525bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2525BCu;
    {
        const bool branch_taken_0x2525bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525BCu;
        // 0x2525c0: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525bc) {
            ctx->pc = 0x252618u;
            goto label_252618;
        }
    }
    ctx->pc = 0x2525C4u;
    // 0x2525c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2525c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2525c8: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x2525c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2525cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2525CCu;
    {
        const bool branch_taken_0x2525cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525CCu;
        // 0x2525d0: 0x26690001  addiu       $t1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525cc) {
            ctx->pc = 0x2525F8u;
            goto label_2525f8;
        }
    }
    ctx->pc = 0x2525D4u;
    // 0x2525d4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2525d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2525d8:
    // 0x2525d8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2525d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2525dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2525dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2525e0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2525e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2525e4: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x2525e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2525e8: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x2525e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x2525ec: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x2525ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x2525f0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2525F0u;
    {
        const bool branch_taken_0x2525f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2525F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525F0u;
        // 0x2525f4: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525f0) {
            ctx->pc = 0x2525D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2525d8;
        }
    }
    ctx->pc = 0x2525F8u;
label_2525f8:
    // 0x2525f8: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x2525f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x2525fc: 0x11d2021  addu        $a0, $t0, $sp
    ctx->pc = 0x2525fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x252600: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x252600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x252604: 0x293182a  slt         $v1, $s4, $s3
    ctx->pc = 0x252604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x252608: 0x123980a  movz        $s3, $t1, $v1
    ctx->pc = 0x252608u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 9));
    // 0x25260c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x25260cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252610: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x252610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x252614: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x252614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_252618:
    // 0x252618: 0x5e00ffc5  bgtzl       $s0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x252618u;
    {
        const bool branch_taken_0x252618 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x252618) {
            ctx->pc = 0x25261Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252618u;
            // 0x25261c: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252530;
        }
    }
    ctx->pc = 0x252620u;
    // 0x252620: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x252620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252624:
    // 0x252624: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x252628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25262c: 0x0  nop
    ctx->pc = 0x25262cu;
    // NOP
    // 0x252630: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x252630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252634: 0x0  nop
    ctx->pc = 0x252634u;
    // NOP
    // 0x252638: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x252638u;
    {
        const bool branch_taken_0x252638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252638u;
        // 0x25263c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252638) {
            ctx->pc = 0x252674u;
            goto label_252674;
        }
    }
    ctx->pc = 0x252640u;
    // 0x252640: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x252640u;
    {
        const bool branch_taken_0x252640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252640u;
        // 0x252644: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252640) {
            ctx->pc = 0x252AB4u;
            goto label_252ab4;
        }
    }
    ctx->pc = 0x252648u;
label_252648:
    // 0x252648: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252648u;
    {
        const bool branch_taken_0x252648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252648u;
        // 0x25264c: 0x7a230000  lq          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252648) {
            ctx->pc = 0x252660u;
            goto label_252660;
        }
    }
    ctx->pc = 0x252650u;
label_252650:
    // 0x252650: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x252650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252654: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x252654u;
    {
        const bool branch_taken_0x252654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252654u;
        // 0x252658: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252654) {
            ctx->pc = 0x252798u;
            goto label_252798;
        }
    }
    ctx->pc = 0x25265Cu;
label_25265c:
    // 0x25265c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25265cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_252660:
    // 0x252660: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x252660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x252664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252668: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x252668u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x25266c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x25266Cu;
    {
        const bool branch_taken_0x25266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25266Cu;
        // 0x252670: 0xac85c450  sw          $a1, -0x3BB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952016), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25266c) {
            ctx->pc = 0x252AB0u;
            goto label_252ab0;
        }
    }
    ctx->pc = 0x252674u;
label_252674:
    // 0x252674: 0x1a600048  blez        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x252674u;
    {
        const bool branch_taken_0x252674 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x252678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252674u;
        // 0x252678: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252674) {
            ctx->pc = 0x252798u;
            goto label_252798;
        }
    }
    ctx->pc = 0x25267Cu;
    // 0x25267c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x25267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252680: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x252680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x252684: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x252684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x252688: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x252688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25268c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25268cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x252690: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252694: 0x2451a240  addiu       $s1, $v0, -0x5DC0
    ctx->pc = 0x252694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x252698: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x252698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25269c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x25269cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2526a0:
    // 0x2526a0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2526a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2526a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2526a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526a8: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x2526a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2526ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2526acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2526b0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2526b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2526b4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2526b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2526b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2526b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2526bc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2526bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2526c0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2526c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2526c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2526c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2526c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2526c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2526cc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2526ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2526d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2526d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2526d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2526d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2526d8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2526d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2526dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2526dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2526e0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2526e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2526e4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2526e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2526e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2526e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2526ec: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2526ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2526f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2526f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2526f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2526f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2526f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2526f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2526fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2526fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x252700: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x252700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x252704: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x252704u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25270c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x25270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x252710: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x252710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x252714: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x252714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x252718: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x252718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x25271c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x25271cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x252720: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x252720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x252724: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x252724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x252728: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x252728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25272c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x25272cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252730: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x252730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x252734: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x252734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252738: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25273c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25273cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252740: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x252740u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x252744: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x252744u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x252748: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x252748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x25274c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252750: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x252750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x252754: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x252758: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x252758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x25275c: 0x7fa600e0  sq          $a2, 0xE0($sp)
    ctx->pc = 0x25275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 6));
    // 0x252760: 0xc0d3e8a  jal         func_34FA28
    ctx->pc = 0x252760u;
    SET_GPR_U32(ctx, 31, 0x252768u);
    ctx->pc = 0x252764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252760u;
    // 0x252764: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FA28u, 0x252760u, 0x252768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252768u;
label_252768:
    // 0x252768: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x252768u;
    {
        const bool branch_taken_0x252768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252768) {
            ctx->pc = 0x25276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252768u;
            // 0x25276c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25278Cu;
            goto label_25278c;
        }
    }
    ctx->pc = 0x252770u;
    // 0x252770: 0xc0941c2  jal         func_250708
    ctx->pc = 0x252770u;
    SET_GPR_U32(ctx, 31, 0x252778u);
    ctx->pc = 0x252774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252770u;
    // 0x252774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x252770u, 0x252778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252778u;
label_252778:
    // 0x252778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x252778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25277c: 0x14a0ffb2  bnez        $a1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x25277Cu;
    {
        const bool branch_taken_0x25277c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x252780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25277Cu;
        // 0x252780: 0x8ec2a230  lw          $v0, -0x5DD0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25277c) {
            ctx->pc = 0x252648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252648;
        }
    }
    ctx->pc = 0x252784u;
    // 0x252784: 0x1054ffb2  beq         $v0, $s4, . + 4 + (-0x4E << 2)
    ctx->pc = 0x252784u;
    {
        const bool branch_taken_0x252784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x252788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252784u;
        // 0x252788: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252784) {
            ctx->pc = 0x252650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252650;
        }
    }
    ctx->pc = 0x25278Cu;
label_25278c:
    // 0x25278c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x25278cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x252790: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x252790u;
    {
        const bool branch_taken_0x252790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252790u;
        // 0x252794: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252790) {
            ctx->pc = 0x2526A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2526a0;
        }
    }
    ctx->pc = 0x252798u;
label_252798:
    // 0x252798: 0x8ec3a230  lw          $v1, -0x5DD0($s6)
    ctx->pc = 0x252798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943280)));
label_25279c:
    // 0x25279c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2527a0: 0x146200c3  bne         $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2527A0u;
    {
        const bool branch_taken_0x2527a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2527A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527A0u;
        // 0x2527a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527a0) {
            ctx->pc = 0x252AB0u;
            goto label_252ab0;
        }
    }
    ctx->pc = 0x2527A8u;
    // 0x2527a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2527a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2527ac: 0x8c4aa228  lw          $t2, -0x5DD8($v0)
    ctx->pc = 0x2527acu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6CA228u));
    // 0x2527b0: 0x114000be  beqz        $t2, . + 4 + (0xBE << 2)
    ctx->pc = 0x2527B0u;
    {
        const bool branch_taken_0x2527b0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527B0u;
        // 0x2527b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527b0) {
            ctx->pc = 0x252AACu;
            goto label_252aac;
        }
    }
    ctx->pc = 0x2527B8u;
    // 0x2527b8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x2527b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x2527bc: 0x34213c00  ori         $at, $at, 0x3C00
    ctx->pc = 0x2527bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15360);
    // 0x2527c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2527c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2527c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2527c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2527c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2527c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2527cc: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2527ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2527d0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2527d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2527d4: 0x0  nop
    ctx->pc = 0x2527d4u;
    // NOP
label_2527d8:
    // 0x2527d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2527d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2527dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2527dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2527e0: 0x0  nop
    ctx->pc = 0x2527e0u;
    // NOP
    // 0x2527e4: 0x0  nop
    ctx->pc = 0x2527e4u;
    // NOP
    // 0x2527e8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2527E8u;
    {
        const bool branch_taken_0x2527e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2527ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527E8u;
        // 0x2527ec: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527e8) {
            ctx->pc = 0x2527D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2527d8;
        }
    }
    ctx->pc = 0x2527F0u;
    // 0x2527f0: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x2527f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2527f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2527f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527f8: 0x18400092  blez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2527F8u;
    {
        const bool branch_taken_0x2527f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2527FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527F8u;
        // 0x2527fc: 0x95430000  lhu         $v1, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527f8) {
            ctx->pc = 0x252A44u;
            goto label_252a44;
        }
    }
    ctx->pc = 0x252800u;
    // 0x252800: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x252800u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252804: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x252804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x252808: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x252808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25280c: 0x3c103e4c  lui         $s0, 0x3E4C
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15948 << 16));
    // 0x252810: 0x3610cccd  ori         $s0, $s0, 0xCCCD
    ctx->pc = 0x252810u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)52429);
    // 0x252814: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x252814u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252818: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x252818u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25281c: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x25281cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_252820:
    // 0x252820: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x252820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x252824: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x252828: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x252828u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x25282c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x25282cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252830: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x252830u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x252834: 0x506f0001  beql        $v1, $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x252834u;
    {
        const bool branch_taken_0x252834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 15));
        if (branch_taken_0x252834) {
            ctx->pc = 0x252838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252834u;
            // 0x252838: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25283Cu;
            goto label_25283c;
        }
    }
    ctx->pc = 0x25283Cu;
label_25283c:
    // 0x25283c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x25283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x252840: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x252844: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x252844u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252848: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x252848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25284c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25284cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252850: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x252850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x252854: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x252854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x252858: 0x2810  mfhi        $a1
    ctx->pc = 0x252858u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x25285c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x252860: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x252860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x252864: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x252864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252868: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x252868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25286c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25286cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252870: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252874: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x252874u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252878: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x252878u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25287c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x25287cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x252880: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x252880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252884: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x252884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252888: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x252888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25288c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x25288cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252890: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x252890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x252894: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x252894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x252898: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x252898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x25289c: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x25289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2528a0: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x2528a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x2528a4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2528a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2528a8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2528a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2528ac: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2528acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2528b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2528b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2528b4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2528b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2528b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2528b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2528bc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2528bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2528c0: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x2528c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x2528c4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2528c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2528c8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2528c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2528cc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2528ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2528d0: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2528d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2528d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2528d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2528d8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2528d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2528dc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2528dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2528e0: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2528e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2528e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2528e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2528e8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2528e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2528ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2528ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2528f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2528f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2528f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2528f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2528f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2528f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2528fc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2528fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x252900: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x252900u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252904: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x252904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252908: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x252908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x25290c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25290cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x252910: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x252910u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252914: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x252914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x252918: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x252918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
    // 0x25291c: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x25291cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x252920: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x252920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x252924: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x252924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x252928: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x252928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x25292c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25292cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252930: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252934: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x252934u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252938: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x252938u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x25293c: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x25293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x252940: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x252940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x252944: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x252944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x252948: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25294c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25294cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252950: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x252950u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x252954: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x252954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x252958: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x252958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x25295c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x25295cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252960: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x252960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252964: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x252964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252968: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x252968u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x25296c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25296cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x252970: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x252970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252974: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x252974u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x252978: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x252978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x25297c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25297cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252980: 0x7fa70100  sq          $a3, 0x100($sp)
    ctx->pc = 0x252980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 7));
    // 0x252984: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x252984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252988: 0x0  nop
    ctx->pc = 0x252988u;
    // NOP
    // 0x25298c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x25298Cu;
    {
        const bool branch_taken_0x25298c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25298Cu;
        // 0x252990: 0x7fa700f0  sq          $a3, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25298c) {
            ctx->pc = 0x252A30u;
            goto label_252a30;
        }
    }
    ctx->pc = 0x252994u;
    // 0x252994: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x252994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25299c: 0x0  nop
    ctx->pc = 0x25299cu;
    // NOP
    // 0x2529a0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2529A0u;
    {
        const bool branch_taken_0x2529a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2529A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529A0u;
        // 0x2529a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529a0) {
            ctx->pc = 0x2529D0u;
            goto label_2529d0;
        }
    }
    ctx->pc = 0x2529A8u;
    // 0x2529a8: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x2529a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2529b0:
    // 0x2529b0: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2529b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2529b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2529B4u;
    {
        const bool branch_taken_0x2529b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529B4u;
        // 0x2529b8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529b4) {
            ctx->pc = 0x252A30u;
            goto label_252a30;
        }
    }
    ctx->pc = 0x2529BCu;
    // 0x2529bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2529bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2529c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2529c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2529c4: 0x0  nop
    ctx->pc = 0x2529c4u;
    // NOP
    // 0x2529c8: 0x4502fff9  bc1fl       . + 4 + (-0x7 << 2)
    ctx->pc = 0x2529C8u;
    {
        const bool branch_taken_0x2529c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2529c8) {
            ctx->pc = 0x2529CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529C8u;
            // 0x2529cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2529B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2529b0;
        }
    }
    ctx->pc = 0x2529D0u;
label_2529d0:
    // 0x2529d0: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x2529d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2529d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2529D4u;
    {
        const bool branch_taken_0x2529d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529D4u;
        // 0x2529d8: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529d4) {
            ctx->pc = 0x252A30u;
            goto label_252a30;
        }
    }
    ctx->pc = 0x2529DCu;
    // 0x2529dc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2529dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2529e0: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x2529e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2529e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2529E4u;
    {
        const bool branch_taken_0x2529e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E4u;
        // 0x2529e8: 0x26690001  addiu       $t1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529e4) {
            ctx->pc = 0x252A10u;
            goto label_252a10;
        }
    }
    ctx->pc = 0x2529ECu;
    // 0x2529ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2529ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2529f0:
    // 0x2529f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2529f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2529f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2529f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2529f8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2529f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2529fc: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x2529fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x252a00: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x252a00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x252a04: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x252a04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x252a08: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x252A08u;
    {
        const bool branch_taken_0x252a08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A08u;
        // 0x252a0c: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a08) {
            ctx->pc = 0x2529F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2529f0;
        }
    }
    ctx->pc = 0x252A10u;
label_252a10:
    // 0x252a10: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x252a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x252a14: 0x11d2021  addu        $a0, $t0, $sp
    ctx->pc = 0x252a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x252a18: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x252a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x252a1c: 0x1d3182a  slt         $v1, $t6, $s3
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x252a20: 0x123980a  movz        $s3, $t1, $v1
    ctx->pc = 0x252a20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 9));
    // 0x252a24: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x252a24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x252a28: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x252a28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x252a2c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x252a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_252a30:
    // 0x252a30: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x252a34: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x252a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a38: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x252a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252a3c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x252A3Cu;
    {
        const bool branch_taken_0x252a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A3Cu;
        // 0x252a40: 0x95430000  lhu         $v1, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a3c) {
            ctx->pc = 0x252820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252820;
        }
    }
    ctx->pc = 0x252A44u;
label_252a44:
    // 0x252a44: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x252A44u;
    {
        const bool branch_taken_0x252a44 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x252A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A44u;
        // 0x252a48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a44) {
            ctx->pc = 0x252AACu;
            goto label_252aac;
        }
    }
    ctx->pc = 0x252A4Cu;
    // 0x252a4c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x252a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252a50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x252a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x252a54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252a58: 0x2450a240  addiu       $s0, $v0, -0x5DC0
    ctx->pc = 0x252a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x252a5c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x252a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_252a60:
    // 0x252a60: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x252a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x252a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x252a6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252a70: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x252a70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x252a74: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x252a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a78: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x252a7c: 0xc0d3e8a  jal         func_34FA28
    ctx->pc = 0x252A7Cu;
    SET_GPR_U32(ctx, 31, 0x252A84u);
    ctx->pc = 0x252A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A7Cu;
    // 0x252a80: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FA28u, 0x252A7Cu, 0x252A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A84u;
label_252a84:
    // 0x252a84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x252A84u;
    {
        const bool branch_taken_0x252a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a84) {
            ctx->pc = 0x252A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A84u;
            // 0x252a88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AA0u;
            goto label_252aa0;
        }
    }
    ctx->pc = 0x252A8Cu;
    // 0x252a8c: 0xc0941c2  jal         func_250708
    ctx->pc = 0x252A8Cu;
    SET_GPR_U32(ctx, 31, 0x252A94u);
    ctx->pc = 0x252A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A8Cu;
    // 0x252a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x252A8Cu, 0x252A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A94u;
label_252a94:
    // 0x252a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x252a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a98: 0x14a0fef0  bnez        $a1, . + 4 + (-0x110 << 2)
    ctx->pc = 0x252A98u;
    {
        const bool branch_taken_0x252a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A98u;
        // 0x252a9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a98) {
            ctx->pc = 0x25265Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25265c;
        }
    }
    ctx->pc = 0x252AA0u;
label_252aa0:
    // 0x252aa0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x252aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x252aa4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x252AA4u;
    {
        const bool branch_taken_0x252aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AA4u;
        // 0x252aa8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252aa4) {
            ctx->pc = 0x252A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252a60;
        }
    }
    ctx->pc = 0x252AACu;
label_252aac:
    // 0x252aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x252aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252ab0:
    // 0x252ab0: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x252ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_252ab4:
    // 0x252ab4: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x252ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x252ab8: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x252ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x252abc: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x252abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x252ac0: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x252ac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x252ac4: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x252ac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x252ac8: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x252ac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x252acc: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x252accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x252ad0: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x252ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x252ad4: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x252ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x252ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x252AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AD8u;
        // 0x252adc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252AE0u;
}
