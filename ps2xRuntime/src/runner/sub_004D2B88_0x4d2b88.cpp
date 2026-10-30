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

// Function: sub_004D2B88
// Address: 0x4d2b88 - 0x4d2fc0
void sub_004D2B88_0x4d2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2B88_0x4d2b88");
#endif

    switch (ctx->pc) {
        case 0x4d2bd8u: goto label_4d2bd8;
        case 0x4d2df0u: goto label_4d2df0;
        default: break;
    }

    ctx->pc = 0x4d2b88u;

    // 0x4d2b88: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x4d2b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x4d2b8c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4d2b90: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x4d2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x4d2b94: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4d2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d2b98: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x4d2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x4d2b9c: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x4d2b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x4d2ba0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x4d2ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2ba4: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x4d2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x4d2ba8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4d2ba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2bac: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x4d2bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x4d2bb0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4d2bb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2bb4: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x4d2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x4d2bb8: 0x85f021  addu        $fp, $a0, $a1
    ctx->pc = 0x4d2bb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2bbc: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x4d2bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x4d2bc0: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x4d2bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x4d2bc4: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x4d2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x4d2bc8: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x4d2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x4d2bcc: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x4d2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x4d2bd0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x4d2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x4d2bd4: 0x0  nop
    ctx->pc = 0x4d2bd4u;
    // NOP
label_4d2bd8:
    // 0x4d2bd8: 0x96ca0010  lhu         $t2, 0x10($s6)
    ctx->pc = 0x4d2bd8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4d2bdc: 0x96c80020  lhu         $t0, 0x20($s6)
    ctx->pc = 0x4d2bdcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x4d2be0: 0x96cb0030  lhu         $t3, 0x30($s6)
    ctx->pc = 0x4d2be0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x4d2be4: 0x1481025  or          $v0, $t2, $t0
    ctx->pc = 0x4d2be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x4d2be8: 0x96c40040  lhu         $a0, 0x40($s6)
    ctx->pc = 0x4d2be8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x4d2bec: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x4d2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x4d2bf0: 0x96cc0050  lhu         $t4, 0x50($s6)
    ctx->pc = 0x4d2bf0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x4d2bf4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4d2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4d2bf8: 0x96c90060  lhu         $t1, 0x60($s6)
    ctx->pc = 0x4d2bf8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x4d2bfc: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x4d2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x4d2c00: 0x96cd0070  lhu         $t5, 0x70($s6)
    ctx->pc = 0x4d2c00u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x4d2c04: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x4d2c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x4d2c08: 0x1a21025  or          $v0, $t5, $v0
    ctx->pc = 0x4d2c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x4d2c0c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D2C0Cu;
    {
        const bool branch_taken_0x4d2c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d2c0c) {
            ctx->pc = 0x4D2C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D2C0Cu;
            // 0x4d2c10: 0x8ee20040  lw          $v0, 0x40($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D2C50u;
            goto label_4d2c50;
        }
    }
    ctx->pc = 0x4D2C14u;
    // 0x4d2c14: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4d2c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d2c18: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4d2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d2c1c: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4d2c1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4d2c20: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x4d2c20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4d2c24: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4d2c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d2c28: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x4d2c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x4d2c2c: 0xae4200e0  sw          $v0, 0xE0($s2)
    ctx->pc = 0x4d2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
    // 0x4d2c30: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d2c34: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4d2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x4d2c38: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x4d2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x4d2c3c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x4d2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x4d2c40: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x4d2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x4d2c44: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x4d2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x4d2c48: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x4D2C48u;
    {
        const bool branch_taken_0x4d2c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2C48u;
        // 0x4d2c4c: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2c48) {
            ctx->pc = 0x4D2DC0u;
            goto label_4d2dc0;
        }
    }
    ctx->pc = 0x4D2C50u;
label_4d2c50:
    // 0x4d2c50: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4d2c50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4d2c54: 0x8ee300c0  lw          $v1, 0xC0($s7)
    ctx->pc = 0x4d2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
    // 0x4d2c58: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x4d2c58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4d2c5c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4d2c5cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4d2c60: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x4d2c60u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x4d2c64: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x4d2c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d2c68: 0x8ef00020  lw          $s0, 0x20($s7)
    ctx->pc = 0x4d2c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x4d2c6c: 0x8eee0060  lw          $t6, 0x60($s7)
    ctx->pc = 0x4d2c6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
    // 0x4d2c70: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x4d2c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d2c74: 0x8ef100a0  lw          $s1, 0xA0($s7)
    ctx->pc = 0x4d2c74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 160)));
    // 0x4d2c78: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x4d2c78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4d2c7c: 0x8eef00e0  lw          $t7, 0xE0($s7)
    ctx->pc = 0x4d2c7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
    // 0x4d2c80: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x4d2c80u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4d2c84: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x4d2c84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x4d2c88: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x4d2c88u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4d2c8c: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x4d2c8cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x4d2c90: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4d2c90u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x4d2c94: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x4d2c94u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x4d2c98: 0xd6c03  sra         $t5, $t5, 16
    ctx->pc = 0x4d2c98u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 16));
    // 0x4d2c9c: 0x1505018  mult        $t2, $t2, $s0
    ctx->pc = 0x4d2c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d2ca0: 0x16e5818  mult        $t3, $t3, $t6
    ctx->pc = 0x4d2ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d2ca4: 0x89ac3  sra         $s3, $t0, 11
    ctx->pc = 0x4d2ca4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d2ca8: 0x9a2c3  sra         $s4, $t1, 11
    ctx->pc = 0x4d2ca8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d2cac: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x4d2cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4d2cb0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x4d2cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4d2cb4: 0x8ee80080  lw          $t0, 0x80($s7)
    ctx->pc = 0x4d2cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x4d2cb8: 0x47400  sll         $t6, $a0, 16
    ctx->pc = 0x4d2cb8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4d2cbc: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4d2cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d2cc0: 0xe7403  sra         $t6, $t6, 16
    ctx->pc = 0x4d2cc0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 16));
    // 0x4d2cc4: 0x86d00000  lh          $s0, 0x0($s6)
    ctx->pc = 0x4d2cc4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d2cc8: 0xac2c3  sra         $t8, $t2, 11
    ctx->pc = 0x4d2cc8u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d2ccc: 0xb5ac3  sra         $t3, $t3, 11
    ctx->pc = 0x4d2cccu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d2cd0: 0x2747823  subu        $t7, $s3, $s4
    ctx->pc = 0x4d2cd0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x4d2cd4: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x4d2cd4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
    // 0x4d2cd8: 0xd6ac3  sra         $t5, $t5, 11
    ctx->pc = 0x4d2cd8u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 11));
    // 0x4d2cdc: 0x1c87018  mult        $t6, $t6, $t0
    ctx->pc = 0x4d2cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x4d2ce0: 0x24030b50  addiu       $v1, $zero, 0xB50
    ctx->pc = 0x4d2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d2ce4: 0x18b8823  subu        $s1, $t4, $t3
    ctx->pc = 0x4d2ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x4d2ce8: 0x30dc823  subu        $t9, $t8, $t5
    ctx->pc = 0x4d2ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x4d2cec: 0x2098018  mult        $s0, $s0, $t1
    ctx->pc = 0x4d2cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4d2cf0: 0x1e37818  mult        $t7, $t7, $v1
    ctx->pc = 0x4d2cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x4d2cf4: 0x2395021  addu        $t2, $s1, $t9
    ctx->pc = 0x4d2cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x4d2cf8: 0x24020ec8  addiu       $v0, $zero, 0xEC8
    ctx->pc = 0x4d2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3784));
    // 0x4d2cfc: 0x2409eb18  addiu       $t1, $zero, -0x14E8
    ctx->pc = 0x4d2cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961944));
    // 0x4d2d00: 0x18ba821  addu        $s5, $t4, $t3
    ctx->pc = 0x4d2d00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x4d2d04: 0x30dc021  addu        $t8, $t8, $t5
    ctx->pc = 0x4d2d04u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x4d2d08: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x4d2d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d2d0c: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x4d2d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d2d10: 0x3155823  subu        $t3, $t8, $s5
    ctx->pc = 0x4d2d10u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x4d2d14: 0xe8ac3  sra         $s1, $t6, 11
    ctx->pc = 0x4d2d14u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 14), 11));
    // 0x4d2d18: 0x24020b50  addiu       $v0, $zero, 0xB50
    ctx->pc = 0x4d2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d2d1c: 0x240808a9  addiu       $t0, $zero, 0x8A9
    ctx->pc = 0x4d2d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x4d2d20: 0x2747021  addu        $t6, $s3, $s4
    ctx->pc = 0x4d2d20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x4d2d24: 0x1625818  mult        $t3, $t3, $v0
    ctx->pc = 0x4d2d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d2d28: 0x1082c3  sra         $s0, $s0, 11
    ctx->pc = 0x4d2d28u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 11));
    // 0x4d2d2c: 0x3284018  mult        $t0, $t9, $t0
    ctx->pc = 0x4d2d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d2d30: 0xf7ac3  sra         $t7, $t7, 11
    ctx->pc = 0x4d2d30u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 11));
    // 0x4d2d34: 0x2112023  subu        $a0, $s0, $s1
    ctx->pc = 0x4d2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x4d2d38: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x4d2d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x4d2d3c: 0x1ee2823  subu        $a1, $t7, $t6
    ctx->pc = 0x4d2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x4d2d40: 0xa3ac3  sra         $a3, $t2, 11
    ctx->pc = 0x4d2d40u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d2d44: 0x858823  subu        $s1, $a0, $a1
    ctx->pc = 0x4d2d44u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2d48: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x4d2d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2d4c: 0x94ac3  sra         $t1, $t1, 11
    ctx->pc = 0x4d2d4cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d2d50: 0x3156821  addu        $t5, $t8, $s5
    ctx->pc = 0x4d2d50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x4d2d54: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x4d2d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4d2d58: 0xcea023  subu        $s4, $a2, $t6
    ctx->pc = 0x4d2d58u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x4d2d5c: 0xad6023  subu        $t4, $a1, $t5
    ctx->pc = 0x4d2d5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x4d2d60: 0xce8021  addu        $s0, $a2, $t6
    ctx->pc = 0x4d2d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x4d2d64: 0xb22c3  sra         $a0, $t3, 11
    ctx->pc = 0x4d2d64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d2d68: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x4d2d68u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d2d6c: 0x1073023  subu        $a2, $t0, $a3
    ctx->pc = 0x4d2d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4d2d70: 0x8c5823  subu        $t3, $a0, $t4
    ctx->pc = 0x4d2d70u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4d2d74: 0xcbc021  addu        $t8, $a2, $t3
    ctx->pc = 0x4d2d74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x4d2d78: 0x20d2823  subu        $a1, $s0, $t5
    ctx->pc = 0x4d2d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d2d7c: 0x26c3823  subu        $a3, $s3, $t4
    ctx->pc = 0x4d2d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d2d80: 0x22b4023  subu        $t0, $s1, $t3
    ctx->pc = 0x4d2d80u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d2d84: 0x2984823  subu        $t1, $s4, $t8
    ctx->pc = 0x4d2d84u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d2d88: 0x20d1021  addu        $v0, $s0, $t5
    ctx->pc = 0x4d2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d2d8c: 0x26c1821  addu        $v1, $s3, $t4
    ctx->pc = 0x4d2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d2d90: 0x22b2021  addu        $a0, $s1, $t3
    ctx->pc = 0x4d2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d2d94: 0x2983021  addu        $a2, $s4, $t8
    ctx->pc = 0x4d2d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d2d98: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d2d9c: 0xae4500e0  sw          $a1, 0xE0($s2)
    ctx->pc = 0x4d2d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 5));
    // 0x4d2da0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4d2da0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4d2da4: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x4d2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x4d2da8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x4d2da8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4d2dac: 0xae4700c0  sw          $a3, 0xC0($s2)
    ctx->pc = 0x4d2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 7));
    // 0x4d2db0: 0xae440040  sw          $a0, 0x40($s2)
    ctx->pc = 0x4d2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 4));
    // 0x4d2db4: 0xae4800a0  sw          $t0, 0xA0($s2)
    ctx->pc = 0x4d2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 8));
    // 0x4d2db8: 0xae460080  sw          $a2, 0x80($s2)
    ctx->pc = 0x4d2db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 6));
    // 0x4d2dbc: 0xae490060  sw          $t1, 0x60($s2)
    ctx->pc = 0x4d2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 9));
label_4d2dc0:
    // 0x4d2dc0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d2dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d2dc4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x4d2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x4d2dc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d2dcc: 0x1c60ff82  bgtz        $v1, . + 4 + (-0x7E << 2)
    ctx->pc = 0x4D2DCCu;
    {
        const bool branch_taken_0x4d2dcc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4D2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2DCCu;
        // 0x4d2dd0: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2dcc) {
            ctx->pc = 0x4D2BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d2bd8;
        }
    }
    ctx->pc = 0x4D2DD4u;
    // 0x4d2dd4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4d2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d2dd8: 0x8faf0100  lw          $t7, 0x100($sp)
    ctx->pc = 0x4d2dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4d2ddc: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x4d2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x4d2de0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x4d2de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2de4: 0x24160b50  addiu       $s6, $zero, 0xB50
    ctx->pc = 0x4d2de4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d2de8: 0x2417eb18  addiu       $s7, $zero, -0x14E8
    ctx->pc = 0x4d2de8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961944));
    // 0x4d2dec: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x4d2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_4d2df0:
    // 0x4d2df0: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x4d2df0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4d2df4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4d2df8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x4d2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x4d2dfc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4d2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4d2e00: 0x8e4d0018  lw          $t5, 0x18($s2)
    ctx->pc = 0x4d2e00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4d2e04: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x4d2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4d2e08: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4d2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4d2e0c: 0x1cd4823  subu        $t1, $t6, $t5
    ctx->pc = 0x4d2e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x4d2e10: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4d2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4d2e14: 0x1364818  mult        $t1, $t1, $s6
    ctx->pc = 0x4d2e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d2e18: 0xa38823  subu        $s1, $a1, $v1
    ctx->pc = 0x4d2e18u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d2e1c: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x4d2e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d2e20: 0x82c823  subu        $t9, $a0, $v0
    ctx->pc = 0x4d2e20u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2e24: 0x24030ec8  addiu       $v1, $zero, 0xEC8
    ctx->pc = 0x4d2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3784));
    // 0x4d2e28: 0x2394021  addu        $t0, $s1, $t9
    ctx->pc = 0x4d2e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x4d2e2c: 0x82c021  addu        $t8, $a0, $v0
    ctx->pc = 0x4d2e2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2e30: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x4d2e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d2e34: 0x2375818  mult        $t3, $s1, $s7
    ctx->pc = 0x4d2e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d2e38: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4d2e38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d2e3c: 0x3155023  subu        $t2, $t8, $s5
    ctx->pc = 0x4d2e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x4d2e40: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4d2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4d2e44: 0x240408a9  addiu       $a0, $zero, 0x8A9
    ctx->pc = 0x4d2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x4d2e48: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x4d2e48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x4d2e4c: 0x94ac3  sra         $t1, $t1, 11
    ctx->pc = 0x4d2e4cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d2e50: 0x3241018  mult        $v0, $t9, $a0
    ctx->pc = 0x4d2e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d2e54: 0x1565018  mult        $t2, $t2, $s6
    ctx->pc = 0x4d2e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d2e58: 0x1832023  subu        $a0, $t4, $v1
    ctx->pc = 0x4d2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4d2e5c: 0x12e2823  subu        $a1, $t1, $t6
    ctx->pc = 0x4d2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x4d2e60: 0x858823  subu        $s1, $a0, $a1
    ctx->pc = 0x4d2e60u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2e64: 0x83ac3  sra         $a3, $t0, 11
    ctx->pc = 0x4d2e64u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d2e68: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x4d2e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2e6c: 0xb5ac3  sra         $t3, $t3, 11
    ctx->pc = 0x4d2e6cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d2e70: 0x1833021  addu        $a2, $t4, $v1
    ctx->pc = 0x4d2e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4d2e74: 0x1672821  addu        $a1, $t3, $a3
    ctx->pc = 0x4d2e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4d2e78: 0x3156821  addu        $t5, $t8, $s5
    ctx->pc = 0x4d2e78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x4d2e7c: 0xcea023  subu        $s4, $a2, $t6
    ctx->pc = 0x4d2e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x4d2e80: 0xad6023  subu        $t4, $a1, $t5
    ctx->pc = 0x4d2e80u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x4d2e84: 0xce8021  addu        $s0, $a2, $t6
    ctx->pc = 0x4d2e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x4d2e88: 0xa22c3  sra         $a0, $t2, 11
    ctx->pc = 0x4d2e88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d2e8c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x4d2e8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x4d2e90: 0x8c5823  subu        $t3, $a0, $t4
    ctx->pc = 0x4d2e90u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4d2e94: 0x473023  subu        $a2, $v0, $a3
    ctx->pc = 0x4d2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4d2e98: 0xcbc021  addu        $t8, $a2, $t3
    ctx->pc = 0x4d2e98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x4d2e9c: 0x20d1823  subu        $v1, $s0, $t5
    ctx->pc = 0x4d2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d2ea0: 0x22b1023  subu        $v0, $s1, $t3
    ctx->pc = 0x4d2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d2ea4: 0x2984023  subu        $t0, $s4, $t8
    ctx->pc = 0x4d2ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d2ea8: 0x26c3021  addu        $a2, $s3, $t4
    ctx->pc = 0x4d2ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d2eac: 0x26c4823  subu        $t1, $s3, $t4
    ctx->pc = 0x4d2eacu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d2eb0: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x4d2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x4d2eb4: 0x24c6007f  addiu       $a2, $a2, 0x7F
    ctx->pc = 0x4d2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x4d2eb8: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4d2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4d2ebc: 0x2508007f  addiu       $t0, $t0, 0x7F
    ctx->pc = 0x4d2ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
    // 0x4d2ec0: 0x20d2021  addu        $a0, $s0, $t5
    ctx->pc = 0x4d2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d2ec4: 0x22b2821  addu        $a1, $s1, $t3
    ctx->pc = 0x4d2ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d2ec8: 0x2983821  addu        $a3, $s4, $t8
    ctx->pc = 0x4d2ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d2ecc: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4d2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4d2ed0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4d2ed0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4d2ed4: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x4d2ed4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x4d2ed8: 0x2529007f  addiu       $t1, $t1, 0x7F
    ctx->pc = 0x4d2ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
    // 0x4d2edc: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x4d2edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x4d2ee0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4d2ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4d2ee4: 0x24e7007f  addiu       $a3, $a3, 0x7F
    ctx->pc = 0x4d2ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x4d2ee8: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x4d2ee8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x4d2eec: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4d2eecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4d2ef0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4d2ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4d2ef4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4d2ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4d2ef8: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x4d2ef8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x4d2efc: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x4d2efcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x4d2f00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4d2f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4d2f04: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x4d2f04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x4d2f08: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4d2f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4d2f0c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4d2f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4d2f10: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x4d2f10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x4d2f14: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4d2f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4d2f18: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4d2f18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4d2f1c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4d2f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4d2f20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d2f24: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4d2f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4d2f28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d2f2c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4d2f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4d2f30: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d2f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4d2f34: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4d2f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4d2f38: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4d2f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4d2f3c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x4d2f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4d2f40: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x4d2f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4d2f44: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x4d2f44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4d2f48: 0x54a00  sll         $t1, $a1, 8
    ctx->pc = 0x4d2f48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x4d2f4c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4d2f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4d2f50: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d2f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d2f54: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4d2f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4d2f58: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4d2f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4d2f5c: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x4d2f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x4d2f60: 0xade50004  sw          $a1, 0x4($t7)
    ctx->pc = 0x4d2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 5));
    // 0x4d2f64: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x4d2f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x4d2f68: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x4d2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x4d2f6c: 0xade3000c  sw          $v1, 0xC($t7)
    ctx->pc = 0x4d2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
    // 0x4d2f70: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4d2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x4d2f74: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x4d2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x4d2f78: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x4d2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x4d2f7c: 0xafc3000c  sw          $v1, 0xC($fp)
    ctx->pc = 0x4d2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x4d2f80: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x4d2f80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x4d2f84: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x4d2f84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x4d2f88: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x4d2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x4d2f8c: 0x441ff98  bgez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x4D2F8Cu;
    {
        const bool branch_taken_0x4d2f8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2F8Cu;
        // 0x4d2f90: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2f8c) {
            ctx->pc = 0x4D2DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d2df0;
        }
    }
    ctx->pc = 0x4D2F94u;
    // 0x4d2f94: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x4d2f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4d2f98: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x4d2f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x4d2f9c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x4d2f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4d2fa0: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x4d2fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x4d2fa4: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x4d2fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4d2fa8: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x4d2fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x4d2fac: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x4d2facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4d2fb0: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x4d2fb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4d2fb4: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x4d2fb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4d2fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2FB8u;
        // 0x4d2fbc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D2FC0u;
}
