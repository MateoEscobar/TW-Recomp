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

// Function: sub_0016DB30
// Address: 0x16db30 - 0x16dc70
void sub_0016DB30_0x16db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DB30_0x16db30");
#endif

    switch (ctx->pc) {
        case 0x16dbc8u: goto label_16dbc8;
        case 0x16dbe0u: goto label_16dbe0;
        default: break;
    }

    ctx->pc = 0x16db30u;

    // 0x16db30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16db34: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x16db38: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x16db3c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x16db40: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x16db44: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x16db48: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x16db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x16db4c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x16db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x16db50: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x16db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x16db54: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x16db54u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x16db58: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x16db58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x16db5c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x16db5cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x16db60: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x16db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x16db64: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x16db64u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x16db68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16db6c: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x16db70: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x16db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x16db74: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x16db74u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x16db78: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x16db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x16db7c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16db80: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x16db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x16db84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16db84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db88: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x16db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x16db8c: 0x6f403  sra         $fp, $a2, 16
    ctx->pc = 0x16db8cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 6), 16));
    // 0x16db90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16db94: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16db94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16db98: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x16db98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x16db9c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x16db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x16dba0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x16dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x16dba4: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x16dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x16dba8: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x16dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x16dbac: 0x87b300c0  lh          $s3, 0xC0($sp)
    ctx->pc = 0x16dbacu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16dbb0: 0x87b400c8  lh          $s4, 0xC8($sp)
    ctx->pc = 0x16dbb0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16dbb4: 0x87b500d0  lh          $s5, 0xD0($sp)
    ctx->pc = 0x16dbb4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16dbb8: 0x87b600d8  lh          $s6, 0xD8($sp)
    ctx->pc = 0x16dbb8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16dbbc: 0x87b700e0  lh          $s7, 0xE0($sp)
    ctx->pc = 0x16dbbcu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16dbc0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16DBC0u;
    SET_GPR_U32(ctx, 31, 0x16DBC8u);
    ctx->pc = 0x16DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBC0u;
    // 0x16dbc4: 0x87b200e8  lh          $s2, 0xE8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16DBC0u, 0x16DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBC8u;
label_16dbc8:
    // 0x16dbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16dbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbcc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16dbd0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16DBD0u;
    {
        const bool branch_taken_0x16dbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBD0u;
        // 0x16dbd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbd0) {
            ctx->pc = 0x16DC40u;
            goto label_16dc40;
        }
    }
    ctx->pc = 0x16DBD8u;
    // 0x16dbd8: 0xc05a2a8  jal         func_168AA0
    ctx->pc = 0x16DBD8u;
    SET_GPR_U32(ctx, 31, 0x16DBE0u);
    ctx->pc = 0x16DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBD8u;
    // 0x16dbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168AA0u, 0x16DBD8u, 0x16DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBE0u;
label_16dbe0:
    // 0x16dbe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16dbe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dbe8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DBE8u;
    {
        const bool branch_taken_0x16dbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBE8u;
        // 0x16dbec: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbe8) {
            ctx->pc = 0x16DC40u;
            goto label_16dc40;
        }
    }
    ctx->pc = 0x16DBF0u;
    // 0x16dbf0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16dbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16dbf4: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x16dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x16dbf8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16dbfc: 0xa45200a6  sh          $s2, 0xA6($v0)
    ctx->pc = 0x16dbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 166), (uint16_t)GPR_U32(ctx, 18));
    // 0x16dc00: 0xa45e0090  sh          $fp, 0x90($v0)
    ctx->pc = 0x16dc00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 30));
    // 0x16dc04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dc08: 0xa4430092  sh          $v1, 0x92($v0)
    ctx->pc = 0x16dc08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x16dc0c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x16dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16dc10: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x16dc10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x16dc14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x16dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dc18: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x16dc18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x16dc1c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x16dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16dc20: 0xa4430098  sh          $v1, 0x98($v0)
    ctx->pc = 0x16dc20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x16dc24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dc28: 0xa453009c  sh          $s3, 0x9C($v0)
    ctx->pc = 0x16dc28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 156), (uint16_t)GPR_U32(ctx, 19));
    // 0x16dc2c: 0xa443009a  sh          $v1, 0x9A($v0)
    ctx->pc = 0x16dc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x16dc30: 0xa454009e  sh          $s4, 0x9E($v0)
    ctx->pc = 0x16dc30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 158), (uint16_t)GPR_U32(ctx, 20));
    // 0x16dc34: 0xa45500a0  sh          $s5, 0xA0($v0)
    ctx->pc = 0x16dc34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 21));
    // 0x16dc38: 0xa45600a2  sh          $s6, 0xA2($v0)
    ctx->pc = 0x16dc38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 162), (uint16_t)GPR_U32(ctx, 22));
    // 0x16dc3c: 0xa45700a4  sh          $s7, 0xA4($v0)
    ctx->pc = 0x16dc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 23));
label_16dc40:
    // 0x16dc40: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x16dc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16dc44: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x16dc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16dc48: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x16dc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16dc4c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16dc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16dc50: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x16dc50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16dc54: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16dc54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16dc58: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x16dc58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dc5c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x16dc5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc60: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x16dc60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dc64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16dc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dc68: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC68u;
        // 0x16dc6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DC70u;
}
