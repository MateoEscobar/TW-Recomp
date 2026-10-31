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

// Function: sub_0046C448
// Address: 0x46c448 - 0x46c5b8
void sub_0046C448_0x46c448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C448_0x46c448");
#endif

    switch (ctx->pc) {
        case 0x46c46cu: goto label_46c46c;
        case 0x46c498u: goto label_46c498;
        case 0x46c4a8u: goto label_46c4a8;
        case 0x46c4bcu: goto label_46c4bc;
        case 0x46c574u: goto label_46c574;
        case 0x46c594u: goto label_46c594;
        case 0x46c5a0u: goto label_46c5a0;
        default: break;
    }

    ctx->pc = 0x46c448u;

    // 0x46c448: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46c448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46c44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46c450: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x46c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x46c454: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x46c454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46c458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c45c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x46c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x46c460: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x46c464: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x46C464u;
    SET_GPR_U32(ctx, 31, 0x46C46Cu);
    ctx->pc = 0x46C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C464u;
    // 0x46c468: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46C464u, 0x46C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C46Cu;
label_46c46c:
    // 0x46c46c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x46C46Cu;
    {
        const bool branch_taken_0x46c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C46Cu;
        // 0x46c470: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c46c) {
            ctx->pc = 0x46C5A0u;
            goto label_46c5a0;
        }
    }
    ctx->pc = 0x46C474u;
    // 0x46c474: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x46c478: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46c478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x46c47c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46c480: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46c480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x46c484: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x46C484u;
    {
        const bool branch_taken_0x46c484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C484u;
        // 0x46c488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c484) {
            ctx->pc = 0x46C580u;
            goto label_46c580;
        }
    }
    ctx->pc = 0x46C48Cu;
    // 0x46c48c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c490: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x46C490u;
    SET_GPR_U32(ctx, 31, 0x46C498u);
    ctx->pc = 0x46C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C490u;
    // 0x46c494: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46C490u, 0x46C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C498u;
label_46c498:
    // 0x46c498: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46c498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c4a0: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x46C4A0u;
    SET_GPR_U32(ctx, 31, 0x46C4A8u);
    ctx->pc = 0x46C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C4A0u;
    // 0x46c4a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46C4A0u, 0x46C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C4A8u;
label_46c4a8:
    // 0x46c4a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c4ac: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x46C4ACu;
    {
        const bool branch_taken_0x46c4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x46C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C4ACu;
        // 0x46c4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c4ac) {
            ctx->pc = 0x46C5A4u;
            goto label_46c5a4;
        }
    }
    ctx->pc = 0x46C4B4u;
    // 0x46c4b4: 0xc11b1b0  jal         func_46C6C0
    ctx->pc = 0x46C4B4u;
    SET_GPR_U32(ctx, 31, 0x46C4BCu);
    ctx->pc = 0x46C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C4B4u;
    // 0x46c4b8: 0x93a40016  lbu         $a0, 0x16($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C6C0u, 0x46C4B4u, 0x46C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C4BCu;
label_46c4bc:
    // 0x46c4bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46c4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c4c0: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x46C4C0u;
    {
        const bool branch_taken_0x46c4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C4C0u;
        // 0x46c4c4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c4c0) {
            ctx->pc = 0x46C5A0u;
            goto label_46c5a0;
        }
    }
    ctx->pc = 0x46C4C8u;
    // 0x46c4c8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x46c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x46c4cc: 0x346302ff  ori         $v1, $v1, 0x2FF
    ctx->pc = 0x46c4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)767);
    // 0x46c4d0: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x46c4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x46c4d4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x46c4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c4d8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x46c4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x46c4dc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x46c4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46c4e0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x46c4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x46c4e4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x46c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c4e8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x46c4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x46c4ec: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x46c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x46c4f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x46c4f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46c4f4: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x46C4F4u;
    {
        const bool branch_taken_0x46c4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c4f4) {
            ctx->pc = 0x46C4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46C4F4u;
            // 0x46c4f8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x46C520u;
            goto label_46c520;
        }
    }
    ctx->pc = 0x46C4FCu;
    // 0x46c4fc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x46c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46c500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x46c500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x46c504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x46c504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x46c508: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x46c508u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x46c50c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x46c50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x46c510: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x46c510u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x46c514: 0x46000004  c1          0x4
    ctx->pc = 0x46c514u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x46c518: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x46c518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x46c51c: 0x0  nop
    ctx->pc = 0x46c51cu;
    // NOP
label_46c520:
    // 0x46c520: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x46c520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x46c524: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x46c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46c528: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x46c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c52c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x46c52cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46c530: 0x0  nop
    ctx->pc = 0x46c530u;
    // NOP
    // 0x46c534: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x46C534u;
    {
        const bool branch_taken_0x46c534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46c534) {
            ctx->pc = 0x46C538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46C534u;
            // 0x46c538: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46C558u;
            goto label_46c558;
        }
    }
    ctx->pc = 0x46C53Cu;
    // 0x46c53c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x46c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46c540: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x46c540u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46c544: 0x0  nop
    ctx->pc = 0x46c544u;
    // NOP
    // 0x46c548: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x46C548u;
    {
        const bool branch_taken_0x46c548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46c548) {
            ctx->pc = 0x46C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46C548u;
            // 0x46c54c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46C558u;
            goto label_46c558;
        }
    }
    ctx->pc = 0x46C550u;
    // 0x46c550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46c554: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x46c554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_46c558:
    // 0x46c558: 0x93a20014  lbu         $v0, 0x14($sp)
    ctx->pc = 0x46c558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x46c55c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x46c560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46c560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c564: 0x2484e6f8  addiu       $a0, $a0, -0x1908
    ctx->pc = 0x46c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960888));
    // 0x46c568: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x46c568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x46c56c: 0xc11fd22  jal         func_47F488
    ctx->pc = 0x46C56Cu;
    SET_GPR_U32(ctx, 31, 0x46C574u);
    ctx->pc = 0x46C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C56Cu;
    // 0x46c570: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x46C56Cu, 0x46C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C574u;
label_46c574:
    // 0x46c574: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x46c574u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x46c578: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46C578u;
    {
        const bool branch_taken_0x46c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C578u;
        // 0x46c57c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c578) {
            ctx->pc = 0x46C5A4u;
            goto label_46c5a4;
        }
    }
    ctx->pc = 0x46C580u;
label_46c580:
    // 0x46c580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x46c584: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46c584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x46c588: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x46c588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x46c58c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x46C58Cu;
    SET_GPR_U32(ctx, 31, 0x46C594u);
    ctx->pc = 0x46C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C58Cu;
    // 0x46c590: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46C58Cu, 0x46C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C594u;
label_46c594:
    // 0x46c594: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x46c594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x46c598: 0xc11f024  jal         func_47C090
    ctx->pc = 0x46C598u;
    SET_GPR_U32(ctx, 31, 0x46C5A0u);
    ctx->pc = 0x46C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C598u;
    // 0x46c59c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46C598u, 0x46C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C5A0u;
label_46c5a0:
    // 0x46c5a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46c5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c5a4:
    // 0x46c5a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x46c5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46c5a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x46c5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c5ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46c5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46c5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x46C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C5B0u;
        // 0x46c5b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C5B8u;
}
