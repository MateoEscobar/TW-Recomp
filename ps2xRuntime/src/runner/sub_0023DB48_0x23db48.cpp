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

// Function: sub_0023DB48
// Address: 0x23db48 - 0x23dc50
void sub_0023DB48_0x23db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB48_0x23db48");
#endif

    switch (ctx->pc) {
        case 0x23db6cu: goto label_23db6c;
        case 0x23db90u: goto label_23db90;
        case 0x23dba0u: goto label_23dba0;
        case 0x23dbb8u: goto label_23dbb8;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dc1cu: goto label_23dc1c;
        default: break;
    }

    ctx->pc = 0x23db48u;

    // 0x23db48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23db4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23db50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23db54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23db54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db58: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x23DB58u;
    {
        const bool branch_taken_0x23db58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB58u;
        // 0x23db5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db58) {
            ctx->pc = 0x23DB98u;
            goto label_23db98;
        }
    }
    ctx->pc = 0x23DB60u;
    // 0x23db60: 0x3c0505cf  lui         $a1, 0x5CF
    ctx->pc = 0x23db60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1487 << 16));
    // 0x23db64: 0xc089998  jal         func_226660
    ctx->pc = 0x23DB64u;
    SET_GPR_U32(ctx, 31, 0x23DB6Cu);
    ctx->pc = 0x23DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB64u;
    // 0x23db68: 0x34a5eafb  ori         $a1, $a1, 0xEAFB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60155);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x23DB64u, 0x23DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB6Cu;
label_23db6c:
    // 0x23db6c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x23DB6Cu;
    {
        const bool branch_taken_0x23db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB6Cu;
        // 0x23db70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db6c) {
            ctx->pc = 0x23DC3Cu;
            goto label_23dc3c;
        }
    }
    ctx->pc = 0x23DB74u;
    // 0x23db74: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x23db74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x23db78: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23db78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x23db7c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x23db7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x23db80: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x23db80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x23db84: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x23db84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x23db88: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x23DB88u;
    SET_GPR_U32(ctx, 31, 0x23DB90u);
    ctx->pc = 0x23DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB88u;
    // 0x23db8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x23DB88u, 0x23DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB90u;
label_23db90:
    // 0x23db90: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23DB90u;
    {
        const bool branch_taken_0x23db90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB90u;
        // 0x23db94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db90) {
            ctx->pc = 0x23DC3Cu;
            goto label_23dc3c;
        }
    }
    ctx->pc = 0x23DB98u;
label_23db98:
    // 0x23db98: 0xc087502  jal         func_21D408
    ctx->pc = 0x23DB98u;
    SET_GPR_U32(ctx, 31, 0x23DBA0u);
    ctx->pc = 0x23DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB98u;
    // 0x23db9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23DB98u, 0x23DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBA0u;
label_23dba0:
    // 0x23dba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23dba4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x23DBA4u;
    {
        const bool branch_taken_0x23dba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dba4) {
            ctx->pc = 0x23DC0Cu;
            goto label_23dc0c;
        }
    }
    ctx->pc = 0x23DBACu;
    // 0x23dbac: 0xc60c01ac  lwc1        $f12, 0x1AC($s0)
    ctx->pc = 0x23dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23dbb0: 0xc08abac  jal         func_22AEB0
    ctx->pc = 0x23DBB0u;
    SET_GPR_U32(ctx, 31, 0x23DBB8u);
    ctx->pc = 0x23DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBB0u;
    // 0x23dbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x23DBB0u, 0x23DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBB8u;
label_23dbb8:
    // 0x23dbb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23dbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbbc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23dbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23dbc0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23DBC0u;
    {
        const bool branch_taken_0x23dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBC0u;
        // 0x23dbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbc0) {
            ctx->pc = 0x23DC3Cu;
            goto label_23dc3c;
        }
    }
    ctx->pc = 0x23DBC8u;
    // 0x23dbc8: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x23DBC8u;
    SET_GPR_U32(ctx, 31, 0x23DBD0u);
    ctx->pc = 0x23DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBC8u;
    // 0x23dbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23DBC8u, 0x23DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBD0u;
label_23dbd0:
    // 0x23dbd0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x23dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x23dbd4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23dbd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dbd8: 0xc480018c  lwc1        $f0, 0x18C($a0)
    ctx->pc = 0x23dbd8u;
    { uint32_t bits = FAST_READ32(0x51018Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dbdc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23dbdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23dbe0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23dbe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23dbe4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23dbe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23dbe8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23dbe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23dbec: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x23dbecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x23dbf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23dbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23dbf4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x23dbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23dbf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23dbf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dbfc: 0x0  nop
    ctx->pc = 0x23dbfcu;
    // NOP
    // 0x23dc00: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x23DC00u;
    {
        const bool branch_taken_0x23dc00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC00u;
        // 0x23dc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc00) {
            ctx->pc = 0x23DC3Cu;
            goto label_23dc3c;
        }
    }
    ctx->pc = 0x23DC08u;
    // 0x23dc08: 0xae1103c0  sw          $s1, 0x3C0($s0)
    ctx->pc = 0x23dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 17));
label_23dc0c:
    // 0x23dc0c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23dc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23dc10: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x23dc10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x23dc14: 0xc089974  jal         func_2265D0
    ctx->pc = 0x23DC14u;
    SET_GPR_U32(ctx, 31, 0x23DC1Cu);
    ctx->pc = 0x23DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC14u;
    // 0x23dc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x23DC14u, 0x23DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC1Cu;
label_23dc1c:
    // 0x23dc1c: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x23dc20: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x23dc24: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x23dc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dc2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x23dc30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23dc34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x23dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dc38: 0xe6000560  swc1        $f0, 0x560($s0)
    ctx->pc = 0x23dc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1376), bits); }
label_23dc3c:
    // 0x23dc3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23dc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dc40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23dc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dc48: 0x3e00008  jr          $ra
    ctx->pc = 0x23DC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC48u;
        // 0x23dc4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DC50u;
}
