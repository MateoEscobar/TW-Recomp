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

// Function: sub_00468050
// Address: 0x468050 - 0x4683f0
void sub_00468050_0x468050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468050_0x468050");
#endif

    switch (ctx->pc) {
        case 0x468098u: goto label_468098;
        case 0x4680d0u: goto label_4680d0;
        case 0x4680e4u: goto label_4680e4;
        case 0x4680f4u: goto label_4680f4;
        case 0x468128u: goto label_468128;
        case 0x468138u: goto label_468138;
        case 0x468198u: goto label_468198;
        case 0x4681ccu: goto label_4681cc;
        case 0x4681d8u: goto label_4681d8;
        case 0x4681f8u: goto label_4681f8;
        case 0x468214u: goto label_468214;
        case 0x468248u: goto label_468248;
        case 0x468254u: goto label_468254;
        case 0x468270u: goto label_468270;
        case 0x468298u: goto label_468298;
        case 0x4682ccu: goto label_4682cc;
        case 0x4682d8u: goto label_4682d8;
        case 0x4682f8u: goto label_4682f8;
        case 0x468314u: goto label_468314;
        case 0x468348u: goto label_468348;
        case 0x468354u: goto label_468354;
        case 0x468370u: goto label_468370;
        case 0x4683a4u: goto label_4683a4;
        case 0x4683b4u: goto label_4683b4;
        default: break;
    }

    ctx->pc = 0x468050u;

label_468050:
    // 0x468050: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x468050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x468054: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x468054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x468058: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x468058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x46805c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x46805cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468060: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x468060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x468064: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x468064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x468068: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x468068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x46806c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46806cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468070: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x468070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x468074: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x468074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468078: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x468078u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46807c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x46807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x468080: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x468080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x468084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x468084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x468088: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x468088u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46808c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46808cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x468090: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x468090u;
    SET_GPR_U32(ctx, 31, 0x468098u);
    ctx->pc = 0x468094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468090u;
    // 0x468094: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468090u, 0x468098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468098u;
label_468098:
    // 0x468098: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x468098u;
    {
        const bool branch_taken_0x468098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468098u;
        // 0x46809c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468098) {
            ctx->pc = 0x468138u;
            goto label_468138;
        }
    }
    ctx->pc = 0x4680A0u;
    // 0x4680a0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x4680a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4680a4: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4680a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4680a8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4680a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4680ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4680acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4680b0: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4680b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4680b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4680B4u;
    {
        const bool branch_taken_0x4680b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4680B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4680B4u;
        // 0x4680b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4680b4) {
            ctx->pc = 0x4680D8u;
            goto label_4680d8;
        }
    }
    ctx->pc = 0x4680BCu;
    // 0x4680bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4680bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4680c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4680c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4680c4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4680c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4680c8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4680C8u;
    SET_GPR_U32(ctx, 31, 0x4680D0u);
    ctx->pc = 0x4680CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4680C8u;
    // 0x4680cc: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4680C8u, 0x4680D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4680D0u;
label_4680d0:
    // 0x4680d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4680D0u;
    {
        const bool branch_taken_0x4680d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4680D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4680D0u;
        // 0x4680d4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4680d0) {
            ctx->pc = 0x468130u;
            goto label_468130;
        }
    }
    ctx->pc = 0x4680D8u;
label_4680d8:
    // 0x4680d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4680d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4680dc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4680DCu;
    SET_GPR_U32(ctx, 31, 0x4680E4u);
    ctx->pc = 0x4680E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4680DCu;
    // 0x4680e0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4680DCu, 0x4680E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4680E4u;
label_4680e4:
    // 0x4680e4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4680e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4680e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4680e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4680ec: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x4680ECu;
    SET_GPR_U32(ctx, 31, 0x4680F4u);
    ctx->pc = 0x4680F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4680ECu;
    // 0x4680f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4680ECu, 0x4680F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4680F4u;
label_4680f4:
    // 0x4680f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4680f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4680f8: 0x144300b0  bne         $v0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x4680F8u;
    {
        const bool branch_taken_0x4680f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4680FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4680F8u;
        // 0x4680fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4680f8) {
            ctx->pc = 0x4683BCu;
            goto label_4683bc;
        }
    }
    ctx->pc = 0x468100u;
    // 0x468100: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x468100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x468104: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x468104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x468108: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x468108u;
    {
        const bool branch_taken_0x468108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468108u;
        // 0x46810c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468108) {
            ctx->pc = 0x468140u;
            goto label_468140;
        }
    }
    ctx->pc = 0x468110u;
    // 0x468110: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x468110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x468114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x468118: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x468118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x46811c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x46811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x468120: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x468120u;
    SET_GPR_U32(ctx, 31, 0x468128u);
    ctx->pc = 0x468124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468120u;
    // 0x468124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468120u, 0x468128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468128u;
label_468128:
    // 0x468128: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x468128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x46812c: 0x0  nop
    ctx->pc = 0x46812cu;
    // NOP
label_468130:
    // 0x468130: 0xc11f024  jal         func_47C090
    ctx->pc = 0x468130u;
    SET_GPR_U32(ctx, 31, 0x468138u);
    ctx->pc = 0x468134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468130u;
    // 0x468134: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x468130u, 0x468138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468138u;
label_468138:
    // 0x468138: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x468138u;
    {
        const bool branch_taken_0x468138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468138u;
        // 0x46813c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468138) {
            ctx->pc = 0x4683BCu;
            goto label_4683bc;
        }
    }
    ctx->pc = 0x468140u;
label_468140:
    // 0x468140: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x468140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468144: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x468144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x468148: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x468148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x46814c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x46814cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x468150: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x468150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x468154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x468154u;
    {
        const bool branch_taken_0x468154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468154u;
        // 0x468158: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x468154) {
            ctx->pc = 0x46816Cu;
            goto label_46816c;
        }
    }
    ctx->pc = 0x46815Cu;
    // 0x46815c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x46815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x468160: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x468160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x468164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x468164u;
    {
        const bool branch_taken_0x468164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468164u;
        // 0x468168: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x468164) {
            ctx->pc = 0x468178u;
            goto label_468178;
        }
    }
    ctx->pc = 0x46816Cu;
label_46816c:
    // 0x46816c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x46816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x468170: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x468170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x468174: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x468174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468178:
    // 0x468178: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x468178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x46817c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x46817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x468180: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x468180u;
    {
        const bool branch_taken_0x468180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468180u;
        // 0x468184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468180) {
            ctx->pc = 0x468204u;
            goto label_468204;
        }
    }
    ctx->pc = 0x468188u;
    // 0x468188: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x468188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x46818c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46818cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468190: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x468190u;
    SET_GPR_U32(ctx, 31, 0x468198u);
    ctx->pc = 0x468194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468190u;
    // 0x468194: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468190u, 0x468198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468198u;
label_468198:
    // 0x468198: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468198u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x46819c: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x46819Cu;
    {
        const bool branch_taken_0x46819c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4681A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46819Cu;
        // 0x4681a0: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46819c) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x4681A4u;
    // 0x4681a4: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4681a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4681a8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4681a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4681ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4681acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4681b0: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4681b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4681b4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4681B4u;
    {
        const bool branch_taken_0x4681b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4681B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4681B4u;
        // 0x4681b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4681b4) {
            ctx->pc = 0x4681E0u;
            goto label_4681e0;
        }
    }
    ctx->pc = 0x4681BCu;
    // 0x4681bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4681bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4681c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4681c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4681c4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4681C4u;
    SET_GPR_U32(ctx, 31, 0x4681CCu);
    ctx->pc = 0x4681C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4681C4u;
    // 0x4681c8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4681C4u, 0x4681CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4681CCu;
label_4681cc:
    // 0x4681cc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4681ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4681d0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4681D0u;
    SET_GPR_U32(ctx, 31, 0x4681D8u);
    ctx->pc = 0x4681D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4681D0u;
    // 0x4681d4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4681D0u, 0x4681D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4681D8u;
label_4681d8:
    // 0x4681d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4681d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4681dc: 0x0  nop
    ctx->pc = 0x4681dcu;
    // NOP
label_4681e0:
    // 0x4681e0: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x4681E0u;
    {
        const bool branch_taken_0x4681e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4681E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4681E0u;
        // 0x4681e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4681e0) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x4681E8u;
    // 0x4681e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4681e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4681ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4681ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4681f0: 0xc119eca  jal         func_467B28
    ctx->pc = 0x4681F0u;
    SET_GPR_U32(ctx, 31, 0x4681F8u);
    ctx->pc = 0x4681F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4681F0u;
    // 0x4681f4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B28u, 0x4681F0u, 0x4681F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4681F8u;
label_4681f8:
    // 0x4681f8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4681f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4681fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4681FCu;
    {
        const bool branch_taken_0x4681fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4681FCu;
        // 0x468200: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4681fc) {
            ctx->pc = 0x468278u;
            goto label_468278;
        }
    }
    ctx->pc = 0x468204u;
label_468204:
    // 0x468204: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x468204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x468208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x468208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46820c: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x46820Cu;
    SET_GPR_U32(ctx, 31, 0x468214u);
    ctx->pc = 0x468210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46820Cu;
    // 0x468210: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46820Cu, 0x468214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468214u;
label_468214:
    // 0x468214: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468214u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x468218: 0x12000059  beqz        $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x468218u;
    {
        const bool branch_taken_0x468218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468218u;
        // 0x46821c: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468218) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x468220u;
    // 0x468220: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x468220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x468224: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x468224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x468228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x468228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46822c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46822cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x468230: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x468230u;
    {
        const bool branch_taken_0x468230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x468234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468230u;
        // 0x468234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468230) {
            ctx->pc = 0x468258u;
            goto label_468258;
        }
    }
    ctx->pc = 0x468238u;
    // 0x468238: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x46823c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x46823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x468240: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x468240u;
    SET_GPR_U32(ctx, 31, 0x468248u);
    ctx->pc = 0x468244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468240u;
    // 0x468244: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468240u, 0x468248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468248u;
label_468248:
    // 0x468248: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x468248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x46824c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x46824Cu;
    SET_GPR_U32(ctx, 31, 0x468254u);
    ctx->pc = 0x468250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46824Cu;
    // 0x468250: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46824Cu, 0x468254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468254u;
label_468254:
    // 0x468254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x468254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468258:
    // 0x468258: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x468258u;
    {
        const bool branch_taken_0x468258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468258u;
        // 0x46825c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468258) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x468260u;
    // 0x468260: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x468260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468264: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x468264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468268: 0xc11a014  jal         func_468050
    ctx->pc = 0x468268u;
    SET_GPR_U32(ctx, 31, 0x468270u);
    ctx->pc = 0x46826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468268u;
    // 0x46826c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468050u;
    goto label_468050;
    ctx->pc = 0x468270u;
label_468270:
    // 0x468270: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x468270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x468274: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468274u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_468278:
    // 0x468278: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x468278u;
    {
        const bool branch_taken_0x468278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468278u;
        // 0x46827c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468278) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x468280u;
    // 0x468280: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x468280u;
    {
        const bool branch_taken_0x468280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468280u;
        // 0x468284: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468280) {
            ctx->pc = 0x468304u;
            goto label_468304;
        }
    }
    ctx->pc = 0x468288u;
    // 0x468288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46828c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x46828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x468290: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x468290u;
    SET_GPR_U32(ctx, 31, 0x468298u);
    ctx->pc = 0x468294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468290u;
    // 0x468294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468290u, 0x468298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468298u;
label_468298:
    // 0x468298: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468298u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x46829c: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x46829Cu;
    {
        const bool branch_taken_0x46829c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4682A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46829Cu;
        // 0x4682a0: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46829c) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x4682A4u;
    // 0x4682a4: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4682a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4682a8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4682a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4682ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4682acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4682b0: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4682b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4682b4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4682B4u;
    {
        const bool branch_taken_0x4682b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4682B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4682B4u;
        // 0x4682b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4682b4) {
            ctx->pc = 0x4682E0u;
            goto label_4682e0;
        }
    }
    ctx->pc = 0x4682BCu;
    // 0x4682bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4682bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4682c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4682c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4682c4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4682C4u;
    SET_GPR_U32(ctx, 31, 0x4682CCu);
    ctx->pc = 0x4682C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4682C4u;
    // 0x4682c8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4682C4u, 0x4682CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4682CCu;
label_4682cc:
    // 0x4682cc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4682ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4682d0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4682D0u;
    SET_GPR_U32(ctx, 31, 0x4682D8u);
    ctx->pc = 0x4682D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4682D0u;
    // 0x4682d4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4682D0u, 0x4682D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4682D8u;
label_4682d8:
    // 0x4682d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4682d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4682dc: 0x0  nop
    ctx->pc = 0x4682dcu;
    // NOP
label_4682e0:
    // 0x4682e0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4682E0u;
    {
        const bool branch_taken_0x4682e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4682E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4682E0u;
        // 0x4682e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4682e0) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x4682E8u;
    // 0x4682e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4682e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4682ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4682ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4682f0: 0xc119eca  jal         func_467B28
    ctx->pc = 0x4682F0u;
    SET_GPR_U32(ctx, 31, 0x4682F8u);
    ctx->pc = 0x4682F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4682F0u;
    // 0x4682f4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B28u, 0x4682F0u, 0x4682F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4682F8u;
label_4682f8:
    // 0x4682f8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4682f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4682fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4682FCu;
    {
        const bool branch_taken_0x4682fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4682FCu;
        // 0x468300: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4682fc) {
            ctx->pc = 0x468378u;
            goto label_468378;
        }
    }
    ctx->pc = 0x468304u;
label_468304:
    // 0x468304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468308: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x468308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x46830c: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x46830Cu;
    SET_GPR_U32(ctx, 31, 0x468314u);
    ctx->pc = 0x468310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46830Cu;
    // 0x468310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46830Cu, 0x468314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468314u;
label_468314:
    // 0x468314: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468314u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x468318: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x468318u;
    {
        const bool branch_taken_0x468318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468318u;
        // 0x46831c: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468318) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x468320u;
    // 0x468320: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x468320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x468324: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x468324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x468328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x468328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46832c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46832cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x468330: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x468330u;
    {
        const bool branch_taken_0x468330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x468334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468330u;
        // 0x468334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468330) {
            ctx->pc = 0x468358u;
            goto label_468358;
        }
    }
    ctx->pc = 0x468338u;
    // 0x468338: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x46833c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x46833cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x468340: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x468340u;
    SET_GPR_U32(ctx, 31, 0x468348u);
    ctx->pc = 0x468344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468340u;
    // 0x468344: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468340u, 0x468348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468348u;
label_468348:
    // 0x468348: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x468348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x46834c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x46834Cu;
    SET_GPR_U32(ctx, 31, 0x468354u);
    ctx->pc = 0x468350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46834Cu;
    // 0x468350: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46834Cu, 0x468354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468354u;
label_468354:
    // 0x468354: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x468354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468358:
    // 0x468358: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x468358u;
    {
        const bool branch_taken_0x468358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468358u;
        // 0x46835c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468358) {
            ctx->pc = 0x468380u;
            goto label_468380;
        }
    }
    ctx->pc = 0x468360u;
    // 0x468360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x468360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468364: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x468364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468368: 0xc11a014  jal         func_468050
    ctx->pc = 0x468368u;
    SET_GPR_U32(ctx, 31, 0x468370u);
    ctx->pc = 0x46836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468368u;
    // 0x46836c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468050u;
    goto label_468050;
    ctx->pc = 0x468370u;
label_468370:
    // 0x468370: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x468370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x468374: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468374u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_468378:
    // 0x468378: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x468378u;
    {
        const bool branch_taken_0x468378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x46837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468378u;
        // 0x46837c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468378) {
            ctx->pc = 0x4683BCu;
            goto label_4683bc;
        }
    }
    ctx->pc = 0x468380u;
label_468380:
    // 0x468380: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x468380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x468384: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x468384u;
    {
        const bool branch_taken_0x468384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x468388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468384u;
        // 0x468388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468384) {
            ctx->pc = 0x4683BCu;
            goto label_4683bc;
        }
    }
    ctx->pc = 0x46838Cu;
    // 0x46838c: 0x92a20003  lbu         $v0, 0x3($s5)
    ctx->pc = 0x46838cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x468390: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x468390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x468394: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x468394u;
    {
        const bool branch_taken_0x468394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468394) {
            ctx->pc = 0x4683ACu;
            goto label_4683ac;
        }
    }
    ctx->pc = 0x46839Cu;
    // 0x46839c: 0xc11c5b8  jal         func_4716E0
    ctx->pc = 0x46839Cu;
    SET_GPR_U32(ctx, 31, 0x4683A4u);
    ctx->pc = 0x4716E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4716E0u, 0x46839Cu, 0x4683A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4683A4u;
label_4683a4:
    // 0x4683a4: 0x1000ff64  b           . + 4 + (-0x9C << 2)
    ctx->pc = 0x4683A4u;
    {
        const bool branch_taken_0x4683a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4683A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4683A4u;
        // 0x4683a8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4683a4) {
            ctx->pc = 0x468138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468138;
        }
    }
    ctx->pc = 0x4683ACu;
label_4683ac:
    // 0x4683ac: 0xc11c306  jal         func_470C18
    ctx->pc = 0x4683ACu;
    SET_GPR_U32(ctx, 31, 0x4683B4u);
    ctx->pc = 0x470C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470C18u, 0x4683ACu, 0x4683B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4683B4u;
label_4683b4:
    // 0x4683b4: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
    ctx->pc = 0x4683B4u;
    {
        const bool branch_taken_0x4683b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4683B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4683B4u;
        // 0x4683b8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4683b4) {
            ctx->pc = 0x468138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468138;
        }
    }
    ctx->pc = 0x4683BCu;
label_4683bc:
    // 0x4683bc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4683bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4683c0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4683c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4683c4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4683c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4683c8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4683c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4683cc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4683ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4683d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4683d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4683d4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4683d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4683d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4683d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4683dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4683DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4683E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4683DCu;
        // 0x4683e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4683DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4683E4u;
    // 0x4683e4: 0x0  nop
    ctx->pc = 0x4683e4u;
    // NOP
    // 0x4683e8: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x4683e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x4683ec: 0x0  nop
    ctx->pc = 0x4683ecu;
    // NOP
    ctx->pc = 0x4683f0u;
}
