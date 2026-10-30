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

// Function: sub_004808A0
// Address: 0x4808a0 - 0x4809d0
void sub_004808A0_0x4808a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004808A0_0x4808a0");
#endif

    switch (ctx->pc) {
        case 0x4808c4u: goto label_4808c4;
        case 0x4808f0u: goto label_4808f0;
        case 0x480900u: goto label_480900;
        case 0x480914u: goto label_480914;
        case 0x480930u: goto label_480930;
        case 0x480940u: goto label_480940;
        case 0x48094cu: goto label_48094c;
        case 0x480958u: goto label_480958;
        case 0x480964u: goto label_480964;
        case 0x480978u: goto label_480978;
        case 0x480994u: goto label_480994;
        case 0x4809a0u: goto label_4809a0;
        default: break;
    }

    ctx->pc = 0x4808a0u;

    // 0x4808a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4808a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4808a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4808a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4808a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4808a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4808ac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4808acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4808b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4808b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4808b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4808b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4808b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4808b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4808bc: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x4808BCu;
    SET_GPR_U32(ctx, 31, 0x4808C4u);
    ctx->pc = 0x4808C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4808BCu;
    // 0x4808c0: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4808BCu, 0x4808C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4808C4u;
label_4808c4:
    // 0x4808c4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4808C4u;
    {
        const bool branch_taken_0x4808c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4808C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4808C4u;
        // 0x4808c8: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4808c4) {
            ctx->pc = 0x4809A0u;
            goto label_4809a0;
        }
    }
    ctx->pc = 0x4808CCu;
    // 0x4808cc: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4808ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4808d0: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4808d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4808d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4808d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4808d8: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4808d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4808dc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x4808DCu;
    {
        const bool branch_taken_0x4808dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4808E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4808DCu;
        // 0x4808e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4808dc) {
            ctx->pc = 0x480980u;
            goto label_480980;
        }
    }
    ctx->pc = 0x4808E4u;
    // 0x4808e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4808e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4808e8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4808E8u;
    SET_GPR_U32(ctx, 31, 0x4808F0u);
    ctx->pc = 0x4808ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4808E8u;
    // 0x4808ec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4808E8u, 0x4808F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4808F0u;
label_4808f0:
    // 0x4808f0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4808f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4808f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4808f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4808f8: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x4808F8u;
    SET_GPR_U32(ctx, 31, 0x480900u);
    ctx->pc = 0x4808FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4808F8u;
    // 0x4808fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4808F8u, 0x480900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480900u;
label_480900:
    // 0x480900: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x480900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x480904: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x480904u;
    {
        const bool branch_taken_0x480904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x480908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480904u;
        // 0x480908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480904) {
            ctx->pc = 0x4809A4u;
            goto label_4809a4;
        }
    }
    ctx->pc = 0x48090Cu;
    // 0x48090c: 0xc12099a  jal         func_482668
    ctx->pc = 0x48090Cu;
    SET_GPR_U32(ctx, 31, 0x480914u);
    ctx->pc = 0x482668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482668u, 0x48090Cu, 0x480914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480914u;
label_480914:
    // 0x480914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480918: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x480918u;
    {
        const bool branch_taken_0x480918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480918u;
        // 0x48091c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480918) {
            ctx->pc = 0x4809A0u;
            goto label_4809a0;
        }
    }
    ctx->pc = 0x480920u;
    // 0x480920: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x480920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x480924: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x480924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x480928: 0xc11fd22  jal         func_47F488
    ctx->pc = 0x480928u;
    SET_GPR_U32(ctx, 31, 0x480930u);
    ctx->pc = 0x48092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480928u;
    // 0x48092c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x480928u, 0x480930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480930u;
label_480930:
    // 0x480930: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x480930u;
    {
        const bool branch_taken_0x480930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480930u;
        // 0x480934: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480930) {
            ctx->pc = 0x4809A0u;
            goto label_4809a0;
        }
    }
    ctx->pc = 0x480938u;
    // 0x480938: 0xc120a46  jal         func_482918
    ctx->pc = 0x480938u;
    SET_GPR_U32(ctx, 31, 0x480940u);
    ctx->pc = 0x48093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480938u;
    // 0x48093c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482918u, 0x480938u, 0x480940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480940u;
label_480940:
    // 0x480940: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x480940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x480944: 0xc120a34  jal         func_4828D0
    ctx->pc = 0x480944u;
    SET_GPR_U32(ctx, 31, 0x48094Cu);
    ctx->pc = 0x480948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480944u;
    // 0x480948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4828D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4828D0u, 0x480944u, 0x48094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48094Cu;
label_48094c:
    // 0x48094c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x48094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x480950: 0xc120aa4  jal         func_482A90
    ctx->pc = 0x480950u;
    SET_GPR_U32(ctx, 31, 0x480958u);
    ctx->pc = 0x480954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480950u;
    // 0x480954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A90u, 0x480950u, 0x480958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480958u;
label_480958:
    // 0x480958: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x480958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x48095c: 0xc120ad8  jal         func_482B60
    ctx->pc = 0x48095Cu;
    SET_GPR_U32(ctx, 31, 0x480964u);
    ctx->pc = 0x480960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48095Cu;
    // 0x480960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482B60u, 0x48095Cu, 0x480964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480964u;
label_480964:
    // 0x480964: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x480964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48096c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x48096cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x480970: 0xc120a60  jal         func_482980
    ctx->pc = 0x480970u;
    SET_GPR_U32(ctx, 31, 0x480978u);
    ctx->pc = 0x480974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480970u;
    // 0x480974: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482980u, 0x480970u, 0x480978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480978u;
label_480978:
    // 0x480978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x480978u;
    {
        const bool branch_taken_0x480978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480978u;
        // 0x48097c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480978) {
            ctx->pc = 0x4809A4u;
            goto label_4809a4;
        }
    }
    ctx->pc = 0x480980u;
label_480980:
    // 0x480980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x480980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x480984: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x480984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x480988: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x480988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x48098c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x48098Cu;
    SET_GPR_U32(ctx, 31, 0x480994u);
    ctx->pc = 0x480990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48098Cu;
    // 0x480990: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x48098Cu, 0x480994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480994u;
label_480994:
    // 0x480994: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x480994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x480998: 0xc11f024  jal         func_47C090
    ctx->pc = 0x480998u;
    SET_GPR_U32(ctx, 31, 0x4809A0u);
    ctx->pc = 0x48099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480998u;
    // 0x48099c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x480998u, 0x4809A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4809A0u;
label_4809a0:
    // 0x4809a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4809a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4809a4:
    // 0x4809a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4809a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4809a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4809a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4809ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4809acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4809b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4809B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4809B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4809B0u;
        // 0x4809b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4809B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4809B8u;
    // 0x4809b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4809b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4809bc: 0x0  nop
    ctx->pc = 0x4809bcu;
    // NOP
    // 0x4809c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4809c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4809c4: 0x0  nop
    ctx->pc = 0x4809c4u;
    // NOP
    // 0x4809c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x4809c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4809cc: 0x0  nop
    ctx->pc = 0x4809ccu;
    // NOP
    ctx->pc = 0x4809d0u;
}
